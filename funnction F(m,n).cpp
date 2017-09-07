#include<stdio.h>
int function(int,int);
int main()
{
	int out,m,n;
	printf("enter the number");
	scanf("%d%d",&m,&n);
	out=function(m,n);
	printf("%d",out);
	return 0;
}
int function(int a,int b)
{
	if(a=0 || a>=b>=1)
	return 1;
	else
	return function(a-1,b)+function(a-1,b-1);
}
