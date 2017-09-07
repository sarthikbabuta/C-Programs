#include<stdio.h>
int main()
{
	int temp,i,j,a,b,reverse=0,prime=0,rem,sum=0;
	printf("enter the num");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	prime=0;
	for(j=2;j<i;j++)
	if(i%j==0)
	{
	  	prime=1;
	}
    }
    while(a!=0)
    temp=a;
	{
	rem=a%10;
	reverse=reverse*10+rem;
	a=a/10;	
	}
	if(reverse==temp)
	{
    sum=sum+rem;
    }
    printf("%d",sum);
	return 0;
}
