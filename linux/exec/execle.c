#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	pid=fork();
	char *argv[]={"./execl",NULL};
	char *envp[]={"mirafra"};
//	char *path="/bin/bash";
//	char *arg1="-c";
//	char *arg2="echo \"Visit $HOSTNAME:$PORT from your browser.\"";
//	char *const envp[] = {"HOSTNAME=www.mirafra.com", "PORT=8080", NULL};
	if(pid==0)
	{
		printf("this is a child process\n");
		printf("pid:%d\n ppid:%d\n",getpid(),getppid());
		execle("/home/km/mirafra_tech/linux/exec/./execl", argv[0], NULL, envp);
		printf("this wont be print\n");
	}
	else
	{
		printf("this is a parent process\n");
		return 0;
	}
}

