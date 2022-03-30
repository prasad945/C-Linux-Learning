#!/bin/bash
echo "Enter first numbers"
read a
echo "Enter second numer"
read b
sum=$(expr $a + $b)
echo "Addition is $sum"
