#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	int fp;
	fp= open("ola_mundo.txt",O_RDWR | O_CREAT);

	if (fp==-1)
	{
		printf("ERRO DE LEITURA \n");
		exit(-1);
	}
	write (fp,"Olá Mundo!",1);

	close(fp);


	return 0;
}
