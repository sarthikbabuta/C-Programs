#include<stdio.h>	
int main()
{
	char ch1[100],ch2[100],ch3[100],i,j;
	printf("enter the number");
	scanf("%s",&ch1);
	printf("enter the number");
	scanf("%s",&ch2);
	while(ch1[i]!='\0')
	{
		ch3[j]=ch1[i];
		i++;
		j++;
		
	}
	i=0;
	while(ch2[i]!='\0')
	{
		ch3[j]=ch2[i];
		i++;
		j++;
	}
	printf("%s",ch3);
	return 0;
}
