#include<stdio.h>
int sum(int,int);
int main()
{
	int x=10,y=20,out=0;
	out=sum(x,y);
	printf("%d",out);
	return 0;
}
int sum(int a,int b)
{
	int z;
	z=a+b;
	return z;
}

