#include<stdio.h>	
int main()
{
	char ch1[100],ch2[100],flag=0,i;
	printf("enter the number");
	scanf("%s",&ch1);
	printf("enter the number");
	scanf("%s",&ch2);
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]==ch2[i])
		{
			flag=1;
		}
		else
		{
		flag=0;
	    }
	}
	if(flag==1)
	{
		printf("equal");
	}
	else
	{
		printf("not");
	}
	return 0;
}
