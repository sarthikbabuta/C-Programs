#include<stdio.h>
#include<string.h>
int read(int *,int *);
int display(int *,int *,int *);
int main()
{
	int num1,*pnum1,num2,*pnum2,total=0,num3;
	read(&num1,&num2);
	display(&num1,&num2,&num3);
	printf("%d",num3);
}
int read(int *b,int *h)
{
	printf("enter the base and height");
	scanf("%d%d",b,h);
}
int display(int *x,int *y,int *z)
{
	*z=0.5* *x * *y;
}
