#include <stdio.h>

int main(){

FILE *pf;
pf = fopen("Ola_mundo.txt","w");
fputs("Olá Mundo!\n", pf);
fclose(pf);

}
