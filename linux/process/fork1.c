#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>


int x=10;
int y=20;
int main()
{
pid_t pid;
pid=fork();

if(pid==0)
{
//int x=20;
//int y=12;
printf("its a child process\n");
printf("child process pid :%d\n",getpid());
printf("child parent process ppid :%d\n",getppid());
printf("x:%p%d\n",&x,x);
printf("y:%p%d\n",&y,y);
}
else
{

printf("im a parent process:\n");
printf("parent process pid:%d\n",getpid());
printf("parent's process:%d\n",getppid());
//printf("x:%p\n",x);
//printf("y:%p\n",y);
}
}
