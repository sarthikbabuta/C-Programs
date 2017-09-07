#include<stdio.h>
int main()
{
	int reverse,num;
	printf("enter the number");
	scanf("%d",&num);
    for(;num!=0;)
		{
			reverse=reverse*10+num%10;
			num=num/10;
		}
	printf("your reverse number is:%d",reverse);
	return 0;
}
