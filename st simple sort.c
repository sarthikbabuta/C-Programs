#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,j,l,temp;
	printf("enter the string");
	gets(ch);
	l=strlen(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=0;ch[j]!='\0';j++)
		{
			if(ch[i]<ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	printf("%s",ch);
}
