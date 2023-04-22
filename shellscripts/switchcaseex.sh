#!/bin/bash


echo -n "enter 1 square 2 cube"
read choice

echo "enter number "
read num

case $choice in
  1) expr $num \* $num
  ;;
  2) expr $num \* $num \* $num
  ;;
  *) echo "wrong choice"
esac 

