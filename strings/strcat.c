/*#include<stdio.h>
void strrrcat(char s1[],char s2[])
{
	int i,j=0;
	for(i=0;s1[i]!=0;i++);
		j=i;
	for(i=0;s2[i]!=0;i++,j++)
	{
		s1[j]=s2[i];
	}
	s1[j]=0;
	printf("%s",s1);
}
int main()
{
	char s1[100];
	char s2[100];
	printf("enter string 1");
	scanf("%s",s1);
	printf("enter string 2");
	scanf("%s",s2);
	strrrcat(s1,s2);
}*/


#include<stdio.h>
void strrrcat(char s1[],char s2[])
{
	int i,j,l=0;
	for(i=0;s1[i]!=0;i++)
	{
	l++;
	}
//s1[l++]=' ';
	for(i=l,j=0;s2[j]!=0;i++,j++)
	{
		s1[i]=s2[j];
	}

	s1[i]=0;
	printf("%s",s1);
}
int main()
{
	char s1[100];
	char s2[100];
	printf("enter string 1");
	scanf("%s",s1);
	printf("enter string 2");
	scanf("%s",s2);
	strrrcat(s1,s2);
}
