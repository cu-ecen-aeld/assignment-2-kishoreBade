#!/bin/bash

filesdir=$1
searchstr=$2
#checking if number of arguments are 2
if [ $# -ne 2 ];
then
    echo "Any of the parameters were not specified properly!"
    exit 1
fi
#checking if given input is dorectory or not
if [ ! -d $filesdir ];
then
    echo "$filesdir does not represent a directory on the filesystem!"
fi

filecount=$(find "$filesdir" -type f | wc -l)
matchstr=$(grep -r "$searchstr" "$filesdir" | wc -l)
echo "The number of files are $filecount and the number of matching lines are $matchstr!"

