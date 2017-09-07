#include<stdio.h>
int main()
{
	char ch[100],ch2[100],i=0;
	printf("enter the string");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>=65 && ch[i]<=91)
		{
			ch2[i]=ch[i]+32;
			i++;
		}
	}
	printf("%s",ch2);
	return 0;
}
