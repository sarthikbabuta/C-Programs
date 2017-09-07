#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two no");
	scanf("%d%d",&a,&b);
	if(a/b==1)
	{
		printf("Integer are equal");
	}
	else if(a>b)
	{
		printf("a is greater");
	}
	else
	{
	printf("b is greater");	
	}
	return 0;
}
