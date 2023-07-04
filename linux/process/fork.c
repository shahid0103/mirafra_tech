#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>

int main()
{
	pid_t pid;
        pid==fork();	
                   if (pid==0)
	  {
	 	        printf("I am a child process\n");
	         	        printf("child process ID :%d\n",getpid());
	         	        printf("Child's Parent process ID:%d\n",getppid());
                    }  
                   else
                    {
	 	     printf("I am a parent process\n");
		     printf("Parent process ID:%d\n",getpid());
		     printf("Parent's parent ID(Shell id):%d\n",getppid());
 	   }
}
	


