#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,temp,first,rem,count=0,x;
	printf("enter the number");
	scanf("%d",&num);
	x=num;
	while(x!=0)
	{
		count++;
		x=x/10;
	}
    rem=num%10;
    temp=pow(10,count-1);
	first=num/temp;
	num=num-rem+first-first*temp+rem*temp;
	printf("%d",num);
    return 0;
}
