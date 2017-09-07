#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,j,l,count=0,val;
	printf("enter the string");
	gets(ch);
	l=strlen(ch);
	for(i=0;i<l;i++)
	{
		count=0;
		for(j=0;j<l;j++)
		{
			if(i==j)
			{
				continue;
			}
			if(ch[i]==ch[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			val=i;
			break;
		}
	}
	printf("%d",val);
}
