#!/bin/bash
#Created By Ankur Pandey (Github : AnkDos)
#finding Fibonacci numbers using recursion

get_fibo(){

  val=$1

  if (( val <= 1 ))
   then echo 0
  elif ((val == 2 ))
   then echo 1
  else
    echo $(( $(get_fibo $((val - 1)) ) + $(get_fibo $((val - 2)) ) ))         #It's like return fibonacci(n-1) + fibonacci(n-2)  for any number 'n'       
  fi
}

i=1

while [ $i -lt 10 ]               #FINDING Fibbonacci number UPTO 10
  do
     echo $(get_fibo $i)
     i=`expr $i + 1`
done
