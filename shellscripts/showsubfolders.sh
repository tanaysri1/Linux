#!/bin/bash

#suppressing new line in the end using -n
echo -n "enter folder name : "
read foldername

ls -R $foldername

