#include<stdio.h>
#include<stdlib.h>

typedef struct prime
{
	int n;
	int c;
	struct prime *next;
}prime;


prime *createnode(int i,int cp)
{
	prime *new=(prime*)malloc(sizeof(prime));
	new->n=i;
	new->c=cp;
	new->next=NULL;
	return new;
}

int primenum(int i)
{
	int x=0,j;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			x++;
		}
	}
	if(x==2)
	{
		return 1;
	}
	return 0;
}


void printll(prime *a)
{
	while(a)
	{
		printf("%d %d\n",a->n,a->c);
		a=a->next;
	}
}

int main()
{
	prime *H=NULL,*N=NULL,*L=NULL;
	int i;
	for(i=2;i<100;i++)
	{
		if(primenum(i)&&primenum(i+2))
		{
			N=createnode(i,i+2);
			if(!H)
			{
				H=N;
			}
			else
			{
				L->next=N;
			}
			L=N;
		}
	}
	printll(H);
}






