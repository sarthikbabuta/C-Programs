#include<stdio.h>
int gcd(int,int);
int main()
{
	int num1,num2,out;
	printf("enter the num");
	scanf("%d%d",&num1,&num2);
	out=gcd(num1,num2);
	printf("%d",out);
	return 0;
}
int gcd(int a,int b)
{
	int rem;
	rem=a%b;
	if(rem==0)
	{
		return b;
	}
	else
	return gcd(b,rem);
}

