#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>



int main()
{
	pid_t pid;
	pid=fork();

	if (pid==0)
	{

		printf("Child's Parent process ID : %d ",getppid());
//		sleep(5);
			printf("I am a child process\n");
		printf("Child process ID : %d \n", getpid());

	}  
	else
	{
		printf("I am a parent process\n");
		printf("Parent process ID : %d \n",getpid());
		printf("Parent's parent ID(Shell id) : %d\n",getppid());
	}
}
