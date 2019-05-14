#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void acende(){
  {

  int pp;
  pp= open("./light.sh on",  O_RDONLY);
  if (pp == -1) {
    while (1) {
      char *line;
      char buf[1000];
      line = gets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */

    }
    close(pp);
 }
}


}
void apaga(){
  {

int pp;
  pp=open("./light.sh off",O_RDONLY);
  if (pp == -1) {
    while (1) {
      char *line;
      char buf[1000];
      line = fgets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    }
    close(pp);
 }
}

}

void Azul(){
  {
int pp;
  pp= open("./light.sh color blue",  O_RDONLY);
  if (pp == -1) {
    while (1) {
      char *line;
      char buf[1000];
      line = fgets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    }
    close(pp);
 }
}

}

void Vermelho(){
  {
int pp;
  pp= open("./light.sh color red",  O_RDONLY);
  if (pp == -1) {
    while (1) {
      char *line;
      char buf[1000];
      line = fgets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    }
    close(pp);
 }
}

}

void Branco(){
  {
int pp;
  pp= open("./light.sh color white",  O_RDONLY);
  if (pp == -1) {
    while (1) {
      char *line;
      char buf[1000];
      line = fgets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    }
    close(pp);
 }
}

}

int i;
int c;
int main(void) {

printf("1 para ligar ,2 para desligar,3 para cor Azul, 4 Para vermelho, 5 para Branco, 6 Sair \n");

int fp;
 fp= open("numbers.txt", O_RDONLY);
while (i != 6){
//FILE * fp;
//fp = fopen("numbers.txt","rbw");
while ((c = fgetc(fp)) != EOF)
{
 putchar(c);

printf("\n");

i = (int)c;
printf("%d \n", i - 48);


if ((i-48) == 1){
    printf("Um");
    acende();
}
if ((i-48) == 2){
    printf("Dois");
    apaga();
}
if ((i-48) == 3){
    printf("Tres");
    Azul();
}
if ((i-48) == 4){
    printf("Quatro");
    Vermelho();
}
if ((i-48) == 5){
    printf("Cinco");
    Branco();
}
if((i-48) == 6){
    printf("Seis");
    close(fp);
    return 0;
}
}

return 0;
}

}
