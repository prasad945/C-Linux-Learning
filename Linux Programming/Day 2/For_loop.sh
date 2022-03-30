#!bin/bash
echo "(1st loop)"
i=0
for i in 1 2 3 4 5 6 7 8 9 10
do
echo "$i"
done

echo "*********************************"
echo "(2nd loop)"

for i in $(seq 1 2 20)
do
echo "$i"
done

echo "*********************************"
echo "(3rd loop)"

for (( a=1; a<=5; a++ ))
do
echo "$a"
done

echo "*********************************"
echo "(4rth loop)"

for i in {1..5}
do
echo "$i"
done

echo "*********************************"
echo "(5th loop)"

for i in {0..10..2}
do
echo "$i"
done
