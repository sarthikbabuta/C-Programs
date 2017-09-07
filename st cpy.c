#include<stdio.h>	
int main()
{
	char ch1[100],ch2[100],i;
	printf("enter the number");
	scanf("%s",&ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		ch2[i]=ch1[i];
	}
	printf("%s",ch2);
	return 0;
}
