#include<stdio.h>
int sum(int,int);
int subtract(int,int);
int multiply(int,int);
int division(int,int);
int modulous(int,int);
int main()
{
	int x=20,y=10,out=0;
	out=sum(x,y);
	printf("%d\n",out);
	out=subtract(x,y);
	printf("%d\n",out);
	out=multiply(x,y);
	printf("%d\n",out);
	out=division(x,y);
	printf("%d\n",out);
	out=modulous(x,y);
	printf("%d\n",out);
	return 0;
}
int sum(int a,int b)
{
	int z;
	z=a+b;
	return z;
}
int subtract(int a,int b)
{
	int z;
	z=a-b;
	return z;
}
int multiply(int a,int b)
{
	int z;
	z=a*b;
	return z;
}
int division(int a,int b)
{
	int z;
	z=a/b;
	return z;
}
int modulous(int a,int b)
{
	int z;
	z=a%b;
	return z;
}

