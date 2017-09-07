#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if((num&(num<<1))==0)
	{
		printf("sparse");
	}
	else
	{
		printf("not sparse");
	}
	return 0;
}
