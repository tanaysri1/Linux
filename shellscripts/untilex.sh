

x=1
until [ $x -gt 10 ]
do
  echo "$x"
  #x=`expr $x + 1`
  ((x=x+1))
done



