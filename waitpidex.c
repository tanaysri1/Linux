#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>


void main()
{
	int pid,x;
	pid = fork();
        if(pid > 0)
	{
		printf("parent pid=%d and waiting for child %d...\n",getpid(),pid);
		waitpid(pid,NULL,0);
		printf("parent is exiting..terminating..\n");
		
	}
	else
	{
		for(x=0;x<20;x++)
		{
			printf("\n child is running ...%d  pid=%d, ppid=%d",x,getpid(),getppid());
		}	
	}
}
