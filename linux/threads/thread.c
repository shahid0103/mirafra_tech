   #include<stdio.h>
   #include<unistd.h>
   #include<pthread.h>
   #include<sys/types.h>
   #include<stdlib.h>


pthread_t t1,t2;

void *add(void *arg)
{

	int a=6,b=5;
	int c;
	c=a+b;
	printf("%d\n",c);
}

void *sub(void *arg)
{
	int c,a=6,b=5;
	c=a-b;
}

int main()
{
	int a=5,b=5;
	int ret;
	void *thread_result;
	ret=pthread_create(&t1, NULL, add, NULL);
	if(ret != 0)
	{
		perror("thread creation failed\n");
		exit(EXIT_FAILURE);
	}
	ret=pthread_create(&t2, NULL, sub, NULL);
	if(ret != 0)
	{
		perror("thread creation failed\n");
		exit(EXIT_FAILURE);
	}


	ret=pthread_join(t1, &thread_result);
	if(ret != 0)
	{
		perror("thread joined failed\n");
		exit(EXIT_FAILURE);
	}
	printf("wait for pthread join\n");
	ret=pthread_join(t2, &thread_result);
	if(ret != 0)
	{
		perror("thread joined failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Thread joined\n");
	exit(EXIT_SUCCESS);
}

