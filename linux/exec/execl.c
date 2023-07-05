#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>


int main()
{
	pid_t pid;
	pid=fork();

	if(pid==0)
	{
		printf("this is a child process\n");
		char *path="/bin/ls";
		char *arg[]={"-l","-a"};
		execl(path, path, arg[0], arg[1],  NULL);
		printf("after excel this wont be print\n");
	}
	else
	{
		printf("parent process\n");
		return 0;
	}
}
