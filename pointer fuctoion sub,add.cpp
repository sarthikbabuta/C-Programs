#include<stdio.h>
int add(int,int);
int sub(int,int);
int operate(int (*op)(int,int),int,int);
int main()
{
	int result;
	result=operate(add,9,7);
	printf("result=%d\n",result);
	result=operate(sub,9,7);
	printf("result=%d\n",result);
}
int add(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int operate(int (*op)(int,int),int c,int d)
{
	int out;
	out=(*op)(c,d);
	return out;
}
