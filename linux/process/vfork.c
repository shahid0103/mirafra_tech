#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int x=20;
int main()
{
	pid_t pid;
	pid=vfork();

	if(pid==0)
	{
		x=40;
		printf("im a child process\n");
		printf("child process pid:%d\n",getpid());
		printf("child parent ppid:%d\n",getppid());
		printf("%d\n",x);
		printf("%p\n",&x);
		//execl("./fork",argv[0],(char *)0);
		exit(0);
	}
	else
	{
	//	int x;

		printf("I am a parent process\n");
		printf("Parent process ID : %d \n",getpid());
		printf("Parent's parent ID(Shell id) : %d\n",getppid());
		printf("%d\n",x);
	//	printf("%p\n",&x);
	}
}
