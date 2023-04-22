


for x in `ls`
do
  if [ -f $x ]
  then
    echo "--------------"
    cat $x

    echo "--------------"
  fi
done
