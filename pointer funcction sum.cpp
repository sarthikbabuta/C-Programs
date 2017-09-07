#include<stdio.h>
int sum(int *,int *);
int main()
{
	int *pa,*pb,*pout,a,b,out;
	printf("enter the 2 number");
	scanf("%d%d",&a,&b);
	pa=&a;
	pb=&b;
	out= *pa + *pb;
	pout=&out;
	printf("%d",*pout);
	return 0;
}
int sum(int *x,int *y)
{
	int *k;
	*k= *x + *y;
	return *k;
}
