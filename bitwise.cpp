#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter the two no:");
	scanf("%d%d",&a,&b);
	c=a|b;
	printf("the OR operator ans is:%d\n",c);
	printf("\n");
	printf("enter the two no:");
	scanf("%d%d",&d,&e);
	f=d^e;
	printf("the XOR operator ans is:%d\n",f);
	printf("\n");
	printf("enter the two no");
	scanf("%d%d",&g,&h);
	i=g&h;
	printf("the AND operator ans is:%d\n",i);
	return 0;
}
