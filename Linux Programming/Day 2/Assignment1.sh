#!bin/sh

pwd
echo "Enter dir name"
read name
searchDir=`ls *.txt`
for FILE in "$searchDir"
do
if [[ "$name" == "$FILE" ]]
then
echo $FILE
fi
done
