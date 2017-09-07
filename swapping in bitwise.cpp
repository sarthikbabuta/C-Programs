#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the two number\n");
	scanf("%d%d",&num1,&num2);
	printf("the number before swapping are number1=%d, number2=%d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("the number before swapping number1=%d number2=%d\n",num1,num2);
	return 0;
}
