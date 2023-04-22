
while [ 1 -gt 0 ] 
do
   echo "enter a number"
   read num

   if [ $num -eq 0 ]
   then 
     break
   fi

  expr $num \* $num


done
