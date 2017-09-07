#include<stdio.h>
#include<math.h>
int main()
{
	int i,arr[10],num,result=0,answer=0,rem;
	printf("enter the size");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		result=result+arr[i]*pow(10,i);
	}
	while(result!=0)
	{
		rem=result%10;
		result=result/10;
		answer=answer*10+rem;
	}
	printf("%d",answer);
	return 0;	
}
