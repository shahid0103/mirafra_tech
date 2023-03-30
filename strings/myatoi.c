#include<stdio.h>
int  myatoi(char a[])
{
int s=0,i;
for(i=0;a[i]!=0;i++)
{
s=(s*10)+a[i]-48;
}
return s;
}

int main()
{
int r;
char a[50]={"123"};
r=myatoi(a);
printf("%d",r);
}
