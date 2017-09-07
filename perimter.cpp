#include<stdio.h>
int main()
{
	int l,b,perimeter,area;
	printf("enter the value of l and b");
	scanf("%d%d",&l,&b);
	perimeter=2*(l+b);
	area=l*b;
	printf("perimeter=%d",perimeter);
	printf("area=%d",area);
	return 0;
}
