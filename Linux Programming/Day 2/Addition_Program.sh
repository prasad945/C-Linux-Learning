add(){

x=$1
y=$2

echo "Values from user $x $y"
echo "Addition of two numbers `expr $x + $y`"

}

echo "Enter first number"
read num1

echo "Enter second number"
read num2

add $num1 $num2

