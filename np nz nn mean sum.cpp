#include<stdio.h>
int main()
{
	int num,sum=0,nn,np,no;
	float mean=0;
	printf("enter the number");
	scanf("%d",&num);
	while (num!=-1)
	{
	if(num<0)
	{
	nn++;	
	}
	else
	if(num=0)
	{
		no++;
	}
	else
	if(num>0)
	{
		np++;
		sum=sum+num;
	}
	printf("enter the number");
	scanf("%d",&num);
    }
    printf("\nno of pos=%d,no of neg=%d, no of zeros=%d",np,nn,no);
    mean=sum/np;
    printf("sum=%d and mean=%d",sum,mean);
	return 0;
}
