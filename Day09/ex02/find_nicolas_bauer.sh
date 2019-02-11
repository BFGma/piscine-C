cat $1 | grep -i "n*i*c*o*l*a*s\s" | grep -i "bauer\s" | grep -o "[(, -]*[0-9]*[-,)]*[0-9]*-*[0-9]*\s"  | tail -8 | grep "[0-9]"
