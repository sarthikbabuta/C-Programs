#include<stdio.h>
int function(int,int);
int main()
{
	int x,y,out;
	printf("enter the num");
	scanf("%d%d",&x,&y);
	out=function(x,y);
	printf("%d",out);
	return 0;
}
int function(int a,int b)
{
	if(a<b)
	return 0;
	else if(b<=a)
	return function(a-b,b)+1;
}


