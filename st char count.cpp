#include<stdio.h>
#include<string.h>
int main()
{
	char ch[6][100],i,count=0;
	for(i=0;i<6;i++)
	{
		gets(ch[i]);
		count++;
	}
	for(i=0;i<6;i++)
	{
	puts(ch[i]);
    }
    printf("%d",count);
	return 0;
}
