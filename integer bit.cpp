#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if((n&1)==1)
		{
			c++;
				n=n>>1;
		}
	
	}
	printf("number is%d",c);
	return 0;
}
