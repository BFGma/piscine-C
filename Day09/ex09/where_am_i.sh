check=$(ifconfig | grep "inet " | tail -1 | awk '{print $2}')
if test -z "$check"
then echo "I am lost!" 
else (ifconfig | grep "inet " | tail -1 | awk '{print $2}')
fi

