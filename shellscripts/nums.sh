

while [ 1 -gt 0 ]
do
  echo "enter a number"
  read n

  if [ $n -eq 0 ]
  then
    break
  fi

  echo "$n" >> numbers
done











