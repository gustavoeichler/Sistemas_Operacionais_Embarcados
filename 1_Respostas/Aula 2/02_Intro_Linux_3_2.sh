
#!/bin/bash

echo "O número de Argumentos foi $#"

i=1


for i-le $#
do
aux=$i
let i++
aux2=$[i]
cal $aux $aux2
	
	
done 

