#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the no");
	scanf("%d",&a);
	printf("\nthe prefix no is:%d",a++);
	printf("\nthe postfix no is:%d\n",++a);
	printf("enter the no");
	scanf("%d",&b);
	printf("\nthe prefix no is:%d",b--);
	printf("\nthe postfix no is:%d",--b);
	return 0;
}
