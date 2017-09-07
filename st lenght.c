#include<stdio.h>	
int main()
{
	char ch[10],i;
	printf("enter the string");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
