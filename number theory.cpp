#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=1,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum*i;
		}
	}
	printf("%d",sum);
	return 0;
} 
