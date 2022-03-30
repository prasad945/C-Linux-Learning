accept(){
echo "Enter first number"
read x

echo "Enter second number"
read y
}

add(){
accept
echo "Values from user $x $y"
echo "Addition of two numbers `expr $x + $y`"
}

subtract(){
accept

echo "Values from user $x $y"
echo "Substractioin of two numbers `expr $x - $y`"
}

multiplication(){
accept
echo "Values from user $x $y"
echo "Multiplication of two numbers `expr $x \* $y`"
}

division(){
accept
echo "Values from user $x $y"
echo "Division of two numbers `expr $x / $y`"

}


echo "1)Add\n2)Subtract\n3)Subtract\n4)Division\n"
echo "Enter your choice"
read choice

case $choice in 
"1")
add
;;
"2")
subtract
;;
"3")
multiplication
;;
"4")
division
;;
*)
echo "Invalid choice"
;;

esac
