#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10],i,j,*parr,num,*pnum,sum=0,*psum,mean,*pmean;
	printf("enter the number");
	scanf("%d",&num);
	pnum=&num;
	parr=arr;
	psum=&sum;
	for(i=0;i< *pnum;i++)
	{
		scanf("%d",(parr+i));
	}
	for(i=0;i< *pnum;i++)
		*psum= *psum+ *(arr+i);
	*pmean= *psum/ *pnum;
	for(i=0;i< *pnum;i++)
	{
		printf("%d", *(arr+i));
	}
	printf("sum=%d",*psum);
	printf("mean=%d",*pmean);
}
