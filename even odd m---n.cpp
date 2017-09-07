#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter the value for m and n\n");
	scanf("%d%d",&m,&n);
	if(m%2==0)
	{
		for(i=m;i<n;i+=2)
	   {
		printf("%d\n",i);
	   }
    }
    else
	if(m%2==1)
	{
		printf("odd no");
		for(i=m;i<n;i+=2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
