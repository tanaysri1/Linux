#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{
	fork();
        fork();
        fork();
        fork();
	printf("\npid=%d , ppid=%d\n",getpid(),getppid());
        scanf("%d");
        
}

