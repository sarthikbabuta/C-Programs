#include<stdio.h>
int main()
{
	char ch[100],ch2[100],i;
	printf("enter the string");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>=92 && ch[i]<=117)
		{
			ch2[i]=ch[i]-32;
			i++;
		}
		else 
		{
			ch2[i]=ch[i];
			i++;
		}
	}
	printf("%s",ch2);
	return 0;
}
