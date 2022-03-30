#!/bin/bash

echo "File name is $0"
echo "FIrst parameter $1"
echo "Second parameter $2"
echo "Third parameter $3"
echo "Fourth parameter $4"
echo "Fifth parameter $5"

echo "All parameters are $*"
echo "Total number of arguments $#"
echo "Process id $$"
echo "All parameters same like $* but with() $@"

if [ $#==0 ]
then
echo "Atleast one argument is required"
exit 1
fi

while(($#))
do 
echo "You have passed $1"
done
