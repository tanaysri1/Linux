#!/bin/bash

echo "enter a file name "
read filename


if [ -e $filename ]
then
  echo "the contents of file $filename are ---" 
  cat $filename
else
  echo "file does not exist ,please try again"
fi 




