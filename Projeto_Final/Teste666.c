#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>   

void acende(){
 system("./light.sh on");
}



void apaga(){
 system("./light.sh off");
}



void Azul(){
 system("./light.sh color blue");
}

void Vermelho(){
 system("./light.sh color red");
}

void Branco(){
 system("./light.sh color white");
}


int main()
	{
			int fp=0;
			
			if ((fp=open("Cro.mid", O_RDONLY)) < -1)
				return 1;
				
			int buffer=0;
			char buf[3];
			int offset;
			
			
			while(read(fp,&buffer,1) > 0){
				
				printf("%X\n", buffer );
				if(buffer == 144){
					//lseek(fp,offset,SEEK_CUR);
					read(fp, &buf, 3);
					printf("%d    %d     %d     \n",buf[0], buf[1], buf[2]);
					offset+=sizeof(buf);
					//if(buffer == 144){
            //printf("Note On \n");
            //usleep(tempo);
            
       // }if(buffer == 128){
            //printf("Note Off \n");
            //usleep(tempo);
          // }
        if (buf[0] == 60){
             //printf("Nota Do, Acende Luz\n");
             acende();
             
        }if (buf[0] == 61){
             //printf("Nota Do sustenido, Apaga Luz\n");
            apaga();
 
			//usleep(500000);
        }if (buf[0] == 62){
             //printf("Nota Re, Acende Luz\n");
             acende();

            //usleep(500000);
        }if (buf[0] == 63){
             //printf("Nota Re sustenido, Cor Azul\n");
             Azul();
            //usleep(500000);
        }if (buf[0] == 64){
             //printf("Nota Mi, Cor Vermelho\n");
             Vermelho();
            //usleep(500000);

        }if (buf[0] == 65){
             //printf("Nota Fa, Cor Branco\n");
             Branco();
              // usleep(500000);

        }if (buf[0] == 66){
             //printf("Nota Fa sustenido, Cor Azul\n");
             Azul();
             //usleep(500000);

        }if (buf[0] == 67){
             //printf("Nota Sol, Cor Vermelho\n");
             Vermelho();
             //usleep(500000);

        }if (buf[0]== 68){
             //printf("Nota Sol sustenido, Cor Branco\n");
             Branco();
            //usleep(500000);

        }if (buf[0] == 69){
             //printf("Nota La, Cor Vermelho\n");
             Vermelho();
              //usleep(500000);

        }if (buf[0] == 70){
             //printf("Nota La sustenido, Cor Branco\n");
             Branco();
              //usleep(500000);

        }if (buf[0] == 71){
             //printf("Nota Si, Apaga\n");
             apaga();
             //usleep(500000);

        }if (buf[0] == 72){
             //printf("Nota Dó+\n");
             //usleep(tempo);
        }
       
					}
				
				//offset++;
				
				
			}
			close(fp);
			
			
}
