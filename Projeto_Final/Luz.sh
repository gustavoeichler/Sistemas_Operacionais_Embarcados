#!/bin/sh


#Setar id da Lampada e o Ip no arquivo listaip
id=$1
ip=$(grep -i $1 listaip | awk -F, '{print $2}')


#Comandos: On, Off, Cor, tempo de transição (ms)

comando=$2
tempo=$3

case $comando in
"on")
 printf "{\"id\":$1,\"method\":\"set_power\",\"params\":[\"on\",\"sudden\",$tempo]}\r\n" |timeout 0.05 nc $ip 55443
 ;;
"off")
 printf "{\"id\":$1,\"method\":\"set_power\",\"params\":[\"off\",\"smooth\",$tempo]}\r\n" |timeout 0.05 nc $ip 55443
 ;;
"cor")
color_hex=$(grep -i $4 Cores | awk -F, '{print $2}') 
 color_int=$(printf '%d' $color_hex) 
 printf "{\"id\":$1,\"method\":\"set_rgb\",\"params\":[$color_int,\"sudden\",$tempo]}\r\n" |timeout 0.05 nc  $ip 55443
 ;;*)
esac