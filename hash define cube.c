#include<stdio.h>
#define pr printf("enter the number\n");
#define pr1 printf("your result is\n");
#define cube(x) x*x*x
int main()
{
	int result,x;
	pr	
	scanf("%d",&x);
	result=cube(x);
	pr1
	printf("%d",result);
	return 0;
}
