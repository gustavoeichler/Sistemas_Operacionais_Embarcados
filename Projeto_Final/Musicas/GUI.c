#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


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


int main(){
	pid_t musica_pid;
	
	musica_pid = fork();
	if (musica_pid != 0){
		
		
	int i;
	sleep(3);
	system("aconnect 14 129");
	system("aconnect -l");
	printf("Lista de musicas para tocar:\n");
	system("ls");
	printf("Digite o número da musica para tocar:\n");
	scanf("%d",&i);
	printf("%d",i);
	if(i==1){
		Musica1();
	
	
	}	if(i==2){
		
		Musica2();

	}
	
		
	}
	else{
		printf("Abrindo o Sintetizador...\n");
		system("lxterminal -e fluidsynth -a alsa /usr/share/sounds/sf2/FluidR3_GM.sf2");
		
		
	}






	return 0;
}
