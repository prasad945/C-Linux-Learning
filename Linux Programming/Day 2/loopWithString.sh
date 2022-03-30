#!bin/bash
arr=("Anish","Tanish","Paresh")
for i in ${arr[@]}
do
echo "$i"
done


str="This is my message"
for word in $str
do
echo "$word"
done


names=("Kranti","Eshan","Kunal")
nameLength=${#names[@]}
echo $nameLength
for (( i=1; i<${nameLength}+1;i++ ))
do
echo $i : "${names[$i-1]}"
done
