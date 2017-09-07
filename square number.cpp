#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=sqrt(a);
	if(b*b==a)
	{
	printf("it is a perfect sqaure number\n");
	printf("sqaure of this no is:%d",b);
	}
	else
	{
		printf("not perfect square");
	}
	return 0;
}
