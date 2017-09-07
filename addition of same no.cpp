#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two no for addition:-\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	c=a-b;
	c=a*b;
	c=a/b;
	c=a%b;
	printf("additon of a and b is:%d",c);
	printf("\n");
	printf("subtraction of a and b is:%d",c);
	printf("\n");
	printf("multiplication of a and b is:%d",c);
	printf("\n");
	printf("divsion of a and b is:-%d",c);
	printf("\nmodulas of a and b is:-%d",c);
	return 0;
}
