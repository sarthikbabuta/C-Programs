#include<stdio.h>
int sum(int,int);
int (*fsum)(int,int);	
int main()
{
	int result;
	fsum=&sum;
	result= (*fsum)(40,20);
	printf("%d",result);
	return 0;
}
int sum(int a,int b)
{
	return (a+b);
}
