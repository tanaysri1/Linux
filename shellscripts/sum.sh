

sum=0
for x in `cat numbers`
do
  sum=`expr $sum + $x`
done

echo "the total of all numbers in the file is $sum"
