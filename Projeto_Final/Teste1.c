#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>   
#include <string.h>   
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <signal.h>
#include <getopt.h>
#include <sys/poll.h>


char comando[50];
char CodCor[15];


void Acende(int id, int vel){
sprintf(comando,"./Luz.sh %d on %d", id, vel);
system(comando);
}
void Apaga(int id, int vel){
sprintf(comando,"./Luz.sh %d off %d", id, vel);
system(comando);
}
void Cor(int id, int vel,char CodCor[50]){

sprintf(comando,"./Luz.sh %d cor %d %s", id, vel,CodCor);
system(comando);
}


int main(){
	Acende(4,500);
	sleep(1);
	Cor(4,500,"Verde");

return 0;
}
