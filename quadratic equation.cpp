#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,root1,root2;
	printf("enter the a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{   printf("real no\n");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
	printf("root1 will:%d\n",root1);
	printf("root2 will:%d\n",root2);
	}
	else 
	if(d<0)
	{
		printf("Imaginary number\n");
	}
	return 0;
}
