#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],ch1[100],l,l1,i,j,k,flag=0,count=0,pos;
	printf("enter the string");
	gets(ch);
	printf("enter the streing");
	gets(ch1);
	l=strlen(ch);
	l1=strlen(ch1);
	while(ch[i]!='\0')
	{
	    j=0;
		k=i;
		while(ch[k]==ch1[j])
		{
			k++;
			j++;
		}
		if(ch1[j]=='\0')
		{
			flag=1;
			count++;
		}
		i++;
	}
	if(flag==1)
	{
		printf("found%d",count);
	}
	else
	{
		printf("not found");
	}
}
