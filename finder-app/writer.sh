#!/bin/bash

writefile=$1
writestr=$2

if [ $# -ne 2 ];
then
    echo "Any of the parameters were not specified properly!"
    exit 1
fi
#creating the directory if not found
mkdir -p "$(dirname "$writefile")"
#copying the string to file
echo $writestr > $writefile

#check if file is created
if [ $? -ne 0 ];
then
    echo "File couldnot be created!"
    exit 1
fi


