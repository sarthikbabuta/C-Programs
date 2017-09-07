#include<stdio.h>
int main()
{
	int n,arr[10],i,j,rep=0,np=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==arr[j])
			{
				count++;
			}
		}
		if(count>1)
		{
			rep=i;
		}
		else if(count==0)
		{
			np=i;
		}
	}
	printf("%d %d",rep,np);
}
