#include<stdio.h>
int main()
{
	int n,m,*pm,*pn,i;
	printf("enter the number");
	scanf("%d%d",&m,&n);
	pn=&n;
	pm=&m;
	for(i=*pm;i<=*pn;i++)
	{
		if(i%2==0)
		{
		printf("even number=%d\n",i);
	    }
	}
	return 0;
}
