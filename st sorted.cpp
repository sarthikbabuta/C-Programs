#include<stdio.h>
#include<strings.h>
int main()
{
	char ch[10][10],i,j,temp[10],n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		gets(ch[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(strcmp(ch[j],ch[j+1])>0)
			{
				strcpy(temp,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],temp);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		puts(ch[i]);
	}
}
