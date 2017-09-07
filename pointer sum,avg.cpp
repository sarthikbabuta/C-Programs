#include<stdio.h>
int main()
{
	int m,n,*pm,*pn,sum=0,*psum,i;
	float avg,*pavg;
	printf("enter the number");
	scanf("%d%d",&m,&n);
	pm=&m;
	pn=&n;
	psum=&sum;
	pavg=&avg;
	for(i=*pm;i<=*pn;i++)
	{
		*psum=*psum+i;
	}
	*pavg=*psum/i;
	printf("sum=%d avg=%.2f",*psum,*pavg);
	return 0;
}
