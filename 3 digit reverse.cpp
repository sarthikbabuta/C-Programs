#include<stdio.h>
int main()
{
	int q1,q2,r1,r2,reverse,num;
	printf("enter the number");
	scanf("%d",&num);
	q1=num/10;
	r1=num%10;
	q2=q1/10;
	r2=q1%10;
	reverse=r1*100+r2*10+q2;
	printf("the reverse no is:%d",reverse);
	return 0;
}
