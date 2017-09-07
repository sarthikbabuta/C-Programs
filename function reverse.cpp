#include<stdio.h>
int rev(int);
int main()
{
	int num,out;
	printf("enter the num");
	scanf("%d",&num);
	out=rev(num);
	printf("reverse number%d",out);
	return 0;
}
int rev(int num)
{
	int reverse;
	while(num!=0)
	{
	reverse=reverse*10+num%10;
	num=num/10;
	}
	return reverse;
}
