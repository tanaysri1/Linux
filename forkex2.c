#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


void main()
{
      int retvaloffork;
      retvaloffork = fork();

      if(retvaloffork > 0)
      {
         printf("hi I am parent my pid =%d and my parent is %d and my child is %d\n",getpid(),getppid(), retvaloffork );
      }
      else
	{
         printf("hi I child ....I got %d ",retvaloffork);
        }

}
