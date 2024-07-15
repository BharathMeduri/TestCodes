#!/bin/bash
filename="stack_$1_$2_`hostname`_`date +%F-%T`.txt"
echo "stacktrace "$1"_"$2" enter " $(date -u) > /wa/$filename
export LD_LIBRARY_PATH=/lib/:/lib64/:/usr/lib/:/usr/lib64/:/opt/VCM/lib/:/opt/VCM/lib/dpi/:/usr/local/mnvpp-pkg/lib64/:/usr/local/mnvpp-pkg/lib/:/usr/lib64:/usr/lib64
stack -s -p $1 >> /wa/$filename
kill -SIGCONT $1
echo "stacktrace "$1"_"$2" exit " $(date -u) >> /wa/$filename
