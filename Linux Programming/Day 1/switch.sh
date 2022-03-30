#!bin/bash

echo "Enter state name"
read state

case $state in 
"Maharashtra")
echo "Capital is Mumbai"
;;
"Uttar Pradesh")
echo "Capital is Lacknow"
;;
"Madhya Pradesh")
echo "Capital is Bhopal"
;;
*)
echo "Cant find capital city"
;;

esac

