#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],s[1000];
	int count[200]={0},i,j,t,m=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				t=str[i];
				str[i]=str[j];
				str[j]=t;
			}
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
			count[str[i]]++;	
			if(count[str[i]]==1)
			{
				s[m]=str[i];
				m++;
			}
	}
	s[m]='\0';
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c %d\n",s[i],count[s[i]]);
	}
	
	return 0;
}
