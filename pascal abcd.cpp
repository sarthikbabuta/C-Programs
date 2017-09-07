#include<stdio.h>
int main()
{
	char i,j;
	for(i=65;i<=68;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
			printf("\n");
	}
	return 0;
}
