#!/bin/bash
arr=(10,20,30,40,50)
echo ${arr[0]}

for i in ${arr[@]}
do
echo $i
done

arr2=([1]=100 [2]=200 [3]=300 [4]=400 [5]=500)
echo ${arr2[@]}

arr3=(anish tanish 100 manish kunal 2.3)
echo ${arr3[@]}
echo ${arr3[*]}
echo ${arr3[@]:0}
echo ${arr3[*]:0}

echo ${arr3[0]}
echo ${arr3[@]:1}
echo ${arr3[0]:1}
echo ${arr3[@]:1:4}
echo ${arr3[1]:0:3}
echo ${#arr3[@]}
echo ${#arr3[*]}

echo ${arr3[@]//100/400}
echo ${arr3[@]/*[1-9]*/}
echo ${arr3[@]/*[aA]*/}