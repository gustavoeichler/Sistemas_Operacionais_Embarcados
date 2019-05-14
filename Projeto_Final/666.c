#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>   
#include <string.h>   

int main(){

    int i;
    pid_t pid;
    char midi[50];
    printf("digite o arquivo .mid para leitura \n");
    
    scanf("%s ", midi);
    char command[100] ="aplaymidi -p 14:0 ";
    strcat(command, midi);
    printf("%s", command);

    if ((pid = fork()) < 0)
    {
        perror("fork");
        exit(1);
    }
    if (pid == 0)
    {   
        //O código aqui dentro será executado no processo filho
        printf("pid do Filho: %d\n", getpid());
         system("aseqdump -p 14:0");
        
    }
    else
    {
        //O código neste trecho será executado no processo pai
        printf("pid do Pai: %d\n", getpid());
       system(command);
       
    }

    
    printf("Esta regiao sera executada por ambos processos\n\n");
    scanf("%d", &i);

return 0;
}
