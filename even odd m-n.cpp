#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter the num");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
	if(i%2==0)
	{
		printf("%deven\n",i);
	}
	else
	{
		printf("%dodd\n",i);
	}
    }
	return 0;
}
