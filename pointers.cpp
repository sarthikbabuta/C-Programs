#include<stdio.h>
int main()
{
	char ch,*pch;
	int count=0,count1=0;
	printf("enter num");
	scanf("%c",&ch);
	pch=&ch;
	while(*pch!='*')
	{
		if(*pch>='A'&&*pch<='Z')
		{
			printf("upper case\n");
			printf("lower case=%d\n",*pch+32);
			count++;
		}
		else if(*pch>='a'&&*pch<='z')
		{
			printf("lower case\n");
			printf("upper case=%d\n",*pch-32);
			count1++;
		}
	scanf("%c",pch);
	}
	printf("upper count=%d lower count=%d",count,count1);
	return 0;
}
