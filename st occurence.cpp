#include<stdio.h>
int main()
{
	char ch[100],ch1,i,count=0,count1=0,j;
	printf("enter the string 1");
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	printf("enter the elemnt to be search");
	scanf("%s",&ch1);
	for(j=0;j<=count;j++)
	{
		if(ch1==ch[j])
		{
			count1++;
		}
	}
	printf("%d",count1);
	return 0;
}
		
