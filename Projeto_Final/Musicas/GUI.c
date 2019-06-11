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
void Musica3(){
	sprintf(comando,"aplaymidi -p14 MSM.mid") ;
	printf("%s", comando);
	system(comando); 
}  
void Musica4(){
	sprintf(comando,"aplaymidi -p14 Teste.mid") ;
	printf("%s", comando);
	system(comando); 
}  void Musica5(){
	sprintf(comando,"aplaymidi -p14 Teste2.mid") ;
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
	system("cat Lista_musica.txt");
	printf("Digite o numero da musica para tocar:\n");
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

	}	if(i==5){
		
		Musica5();

	}
	
		
	}
	else{
		system("lxterminal -e ./aseqdump -p14");
		printf("Abrindo o Sintetizador...\n");
		system("lxterminal -e fluidsynth -a alsa /usr/share/sounds/sf2/FluidR3_GM.sf2");
		
		
	}






	return 0;
}
