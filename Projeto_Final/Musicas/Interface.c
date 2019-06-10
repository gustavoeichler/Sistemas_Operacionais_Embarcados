
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <signal.h>
#include <getopt.h>
#include <sys/poll.h>
#include <alsa/asoundlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>   
#include <string.h> 
	char comando[50];
void Musica1(){
	sprintf(comando,"aplaymidi -p14 elise.mid") ;
	printf("%s", comando);
	system(comando);
}  
void Musica2(){
	sprintf(comando,"aplaymidi -p14 Metronome.mid") ;
	printf("%s", comando);
	system(comando); 
}  
void Musica3(){
	sprintf(comando,"aplaymidi -p14 MSM.mid") ;
	printf("%s", comando);
	system(comando); 
}  
void Musica4(){
	sprintf(comando,"aplaymidi -p14 Teste.mid") ;
	printf("%s", comando);
	system(comando); 
}  
int main(){

	int i;
	
	printf("Lista de músicas para tocar\n 1- elise \n 2-Metronome \n") ;
	printf("Digite o número da música para tocar:\n");
	scanf("%d",&i);
	printf("%d",i);
	if(i==1){
		Musica1();
	
	
	}	if(i==2){
		
		Musica2();

	}	if(i==3){
		
		Musica3();

	}	if(i==4){
		
		Musica4();

	}
	
	return 0;
}
