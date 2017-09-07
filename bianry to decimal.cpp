#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,rem,decimal=0;
	printf("enter the binary num");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		decimal=decimal+rem*pow(2,i);
		num=num/10;
		i++;
	}
	printf("binary no:%d",decimal);
}
