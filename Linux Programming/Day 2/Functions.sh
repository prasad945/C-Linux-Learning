#!bin/sh

myfunction(){
echo "myfunction is called"
}

myfunction2(){
echo "Parameters are $1 $2"
}

myfunction3(){
echo "myfunction3 is called"
return 100;
}

myfunction4(){
echo "myfunction4 is called values $1 $2"
return 200
}
echo "This is main part"

myfunction

myfunction2 Anish Tanish
myfunction3
retvalue=$?
echo "Returned value is $retvalue"

myfunction4 manish tanish
retMessage=$?
echo "Returned value is $retMessage"
