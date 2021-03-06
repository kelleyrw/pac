#/bin/bash

# ------------------------------------------------------------------------------- # 
# resubmitConfig.sh -- creates a config file to resubmit jobs that failed         # 
#                                                                                 # 
# description: This script will search the output dir for the given condor script # 
#              and determine which files do not exist.  It uses this list of      # 
#              missing files to create a new sumission script.  This script       # 
#              is the same name as the original script except with an _resubmit   # 
#              appended to the name                                               # 
#                                                                                 # 
# usage: ./resubmitConfig.sh <condor_script_file>                                 # 
#                                                                                 # 
# <condor_script_file> is the originially submitted condor script                 # 
#                                                                                 # 
#                                                                                 # 
# ------------------------------------------------------------------------------- #

# input
# ------------------------------------------------------------------------------- #

condor_script_filename=$1

if [ ! -f "$condor_script_filename" ]; then
	echo "File $condor_script_filename not found.  Exiting"
	exit 1
fi

# get the arguments lines from the original submission
# ------------------------------------------------------------------------------- #

# get the list of args into an array 
index=0
while read line ; do
	if [ -n "$(echo $line | grep argument)" ]; then
		arg_list[$index]=$(echo $line | sed s/\"\"/\\\\\"\\\\\"/)
		index=$(($index+1))
	fi
done < $condor_script_filename
num_args=${#arg_list[@]}

# get output path
output_path=$(echo ${arg_list[0]} | awk '{print $6}')

# output files to find -- if found, the index is stored
for (( i=0; i < $num_args; i++ )); 
do
	input_file=$(echo ${arg_list[$i]} | awk '{print $3}')
	file=$(basename ${input_file})
	if [ ! $(find $output_path -type f -name $file) ]; then
		index_of_missing_files=(${index_of_missing_files[@]} $i)
	fi
done

# form the resubmissing script
# ------------------------------------------------------------------------------- #

# if there are missing files, create the resubmit script
num_missing_files=${#index_of_missing_files[@]}
if [ ${num_missing_files} -gt 0 ]; then

	# same name as originial condor script with _resubmit appended
	condor_resubmit_script_filename=${condor_script_filename%.*}_resubmit.cmd
	echo Missing ${num_missing_files} / ${num_args} files 
	echo creating resubmit list: $condor_resubmit_script_filename
	
	# do the same header as original file
	head -n 15 $condor_script_filename > $condor_resubmit_script_filename
	
	for (( i=0; i < ${num_missing_files}; i++ )); 
	do
cat >> $condor_resubmit_script_filename << EOF

executable=wrapper.sh
transfer_executable=True
${arg_list[${index_of_missing_files[$i]}]}
queue

EOF
	done
else
	echo "No missing files" 

	# create a blank resubmit script 
	condor_resubmit_script_filename=${condor_script_filename%.*}_resubmit.cmd
	head -n 15 $condor_script_filename > $condor_resubmit_script_filename
fi
