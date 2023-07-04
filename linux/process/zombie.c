#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	pid=fork();
	int i;
	if(pid==0)
	{
		for(i=0;i<5;i++)
		{
			printf("im a child process\n");
		}
		printf("child process pid:%d\n",getpid());
		printf("child parent process ppid:%d\n",getppid());
		exit(1);
		int x=10,y=20;
		printf("%d\n%p\n%d\n%p\n",x,&x,y,&y);
		
	}
	else
	{
		getchar();
		int status;
//		wait(&status);
		printf("%d",__WEXITSTATUS(status));
		getchar();
		printf("im parent\n");
		printf("parent process pid:%d\n",getpid());
		printf("parent's process pid:%d\n",getppid());
	}
}
