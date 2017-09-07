#include<stdio.h>
int isprime(int);
int main()
{
	int n,out;
	printf("enter the number");
	scanf("%d",&n);
	out=isprime(n);
	printf("%d",out);
	return 0;
}
int isprime(int num)
{
	int i,flag=1;
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
} 

