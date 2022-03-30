#!bin/sh

pwd
searchDir=`ls *.txt`
for FILE in "$searchDir"
do
echo $FILE
mv $FILE $(basename $FILE .txt).pdf  #change the filename
done
