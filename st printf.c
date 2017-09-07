#include<stdio.h>
#include<string.h>
int main()
{
	char ch[6][10],i;
	printf("enter the name\n");
	for(i=0;i<6;i++)
	{
		
		gets(ch[i]);
	}
	for(i=0;i<6;i++)
	{
	puts(ch[i]);
    }
	return 0;
}
