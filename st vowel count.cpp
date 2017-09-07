#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	int i,p,count=0,l;
	gets(ch);
	l=strlen(ch);
	for(i=0;i<l;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		count++;
	}
	printf("%d",count);
}

