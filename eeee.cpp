#include<stdio.h>
int main()
{
	int i,j;
	for(i=69;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
