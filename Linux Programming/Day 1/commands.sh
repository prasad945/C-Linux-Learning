#!/bin/bash

echo "using \"$* \":"
for a in "$*"; do
echo $a
done

echo "\nUsing \$*:"
for a in $*; do
echo $a;
done

echo "***************************"

echo "using \"$@ \":"
for a in "$@"; do
echo $a
done

echo "\nUsing \$@:"
for a in $@; do
echo $a;
done


#for var in "$@"    #($*) consider every value as separate
#do 
#echo "$var"
#done
