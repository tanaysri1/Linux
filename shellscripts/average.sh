

echo "enter 3 numbers"
read a b c

sum=`expr $a + $b + $c`

average=`expr $sum / 3`

echo "average = $average"
