#include<stdio.h>
#include<signal.h>


void myhandler(int signo)
{
    printf(" hahaha  .I got signal number %d..\n",signo);
}


void main()
{
    signal(SIGTERM,myhandler);
    while(1);
}
