#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,octal=0,rem;
	printf("enter the decimalnum");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%8;
		octal=octal+rem*pow(10,i);
		num=num/8;
		i++;
	}
	printf("%d",octal);
	return 0;
}
