//write a program to last n character of charcter array in other array using another array
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],ch1[100],*pch,*pch1,i;
    int m,n,l;
	printf("enter the string");
	gets(ch);
	pch=&ch;
	pch1=&ch1;
	printf("enter the first pos");
	scanf("%d",&m);
	printf("enter the last pos");
	scanf("%d",&n);
	pch=pch+m;
	l=strlen(ch);
	m=l-n;
	for(i=m;i<l&& *(pch)!='\0';i++)
	{
		*pch1=  *pch;
		pch++;
		pch1++;
	}
	puts(ch1);
}
