#include<stdio.h>
#define pr printf("enter the number\n");
#define pr1 printf("your result is\n");
#define square(x) x*x
int main()
{
	int result,x;
	pr	
	scanf("%d",&x);
	result=square(x);
	pr1
	printf("%d",result);
	return 0;
}
