friends=("Anish" "Tanish" "Piyush" "Manish")
for  str in ${friends[@]}; do
echo $str
done

for  str in ${friends[@]}; do
echo "Friends $i is ${str[$i]}"
done

read -p "Enter number of rows and cols" c
c=`expr $r - 1`
declare -A arr
for  (( i=0 ;j<c;i++ ))
do
	for  (( j=0 ;j<c;j++ ))
	do
		read -p "Enter the value " arr[$i,$j]
	done
done


	


for i in $(seq 0 1 $c)
do
	for j in $(seq 0 1 $c)
	do
		read -p "Enter the value fo $i $j element" arr[$i,$j]
	done
done


echo "Values are"
for i in $(seq 0 1 $c)
do
	for j in $(seq 0 1 $c)
	do
		echo -n "${arr[$i,$j]}"
	done
	echo
done
