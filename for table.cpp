#include<stdio.h>
int main()
{
	int i,table,n;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	table=i*n;
	printf("%d\n",table);
	}
	return 0;
}
