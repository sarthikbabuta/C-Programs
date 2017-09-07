#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10],i,flag=0,length;
	printf("enter the string");
	gets(ch);
	length=strlen(ch)-1;
	for(i=0;i<length;i++)
	{
		if(ch[i]==ch[length-i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("pallingdrome");
	}
	else
	{
		printf("not pallingdrome");
	}
}
