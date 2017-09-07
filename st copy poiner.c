#include<stdio.h>
int main()
{
	char ch[100],ch1[100],*pch,*pch1,i;
    int first,last;
	printf("enter the string");
	gets(ch);
	pch=&ch;
	pch1=&ch1;
	printf("enter the first pos");
	scanf("%d",&first);
	printf("enter the last pos");
	scanf("%d",&last);
	pch=pch+first;
	for(i=first;i<last&& *(pch)!='\0';i++)
	{
		*pch1=  *pch;
		pch++;
		pch1++;
	}
	puts(ch1);
}
