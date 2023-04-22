#!/bin/bash


echo "enter a name" 
read name

if [ -e $name ];then
 if [ -f $name ]
 then
    cat $name
 fi

 if [ -d $name ];then
   ls $name
 fi

else
  echo "wrong name , does not exist "

fi



