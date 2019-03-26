#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
   
  
  
    /* Le um nome para o arquivo a ser aberto: */
    char name[30];
    int a=0;
    printf("Digite o seu nome:\n");
    gets(name);
    printf("Digite a sua idade:\n");
    scanf("%d",&a);
 FILE *fp;
    fp=fopen("ola_usuario_1.txt","w"); /* Arquivo ASCII, para leitura */
   if(!fp)
   {
       printf( "Erro na abertura do arquivo");
       exit(-1);
   }
    /* Se nao houve erro, imprime no arquivo e o fecha ...*/
   
        fputs("Nome:",fp);
        fputs(name,fp);
        putc('\n', fp);
        fputs("Idade:",fp);
        fprintf(fp, "%d", a); 
        
    fclose(fp);
    }
    
