#include<stdio.h>
int strrrcmp(char s1[],char s2[])
{
	int i,j;
	for(i=0;s1[i]!=0;i++)
	{
		for(j=0;s2[j]!=0;j++)
		{
			if(s1[i]>s2[j])
			{
				return 1;
			}
			if(s1[i]<s2[j])
			{
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
}
int main()
{
	int r;
	char s1[100];
	char s2[100];
	printf("enter string 1\n");
	scanf("%s",s1);
	printf("enter string 2\n");
	scanf("%s",s2);
	r=strrrcmp(s1,s2);
	if(r==1)
	{
		printf("%s is greater than %s",s1,s2);
	}
	else if(r==-1)
	{
		printf("%s is greater than %s",s2,s1);
	}
	else
	{
		printf("both are equal");
	}
}
