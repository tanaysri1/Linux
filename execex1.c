#include<stdio.h>
#include<unistd.h>

void main()
{
	char * arr[] = {"/bin/ls","-R",NULL};
        char *arr2[] ={"ls" ,"-R",NULL};
	printf("hello I am original process ...\n");
	//execl("/bin/ls","/bin/ls","-l",NULL);
	//execl("./infy","./infy",NULL);
	
        //execv("/bin/ls",arr);
       // execlp("ls","ls","-l","/",NULL);
       execvp("ls",arr2);
	printf("\n end of original process ");
}

