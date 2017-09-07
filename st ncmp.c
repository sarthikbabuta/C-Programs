#include<stdio.h>
int main()
{
	int i,j,temp=0,n;
	char ch[100],ch1[100];
	printf("enter the string");
	scanf("%s%s",&ch,&ch1);
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(ch[j]==ch1[i])
			{
				temp=1;
			}
			else
			{
				temp=0;
			}
		}
	}
	if(temp==1)
	{
		printf("string are equal");
	}
	else
	{
	printf("string are not equal");
	}
}
