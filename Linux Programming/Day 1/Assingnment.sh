#!/bin/bash

echo "Enter first number"
read a

echo "Enter second number"
read b

if [ $a -eq $b ]
then
echo "Both are same"
fi



if [ $a -eq $b ]
then 
	echo "Both are equal"
elif [ $a -gt $b ] 
then 
	echo "$a is greater than $b"
elif [ $a -lt $b ]
then
	echo "$a is less than $b"
else
	echo "Condition not matches"
fi
