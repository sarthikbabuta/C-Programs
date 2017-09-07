#include<stdio.h>
int main()
{
	int rev,rem,num;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	while(rev!=0)
	{
		rem=rev%10;
		rev=rev/10;
		printf("%d\n",rem);
	}
	return 0;
}
