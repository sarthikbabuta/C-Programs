#include<stdio.h>
int main()
{
	int i,j,l,space;
	for(i=1;i<=4;i++)
	{
	for(space=3;space>=i;space--)
    {
	   printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	   printf("%d",j);	
	}	
	for(l=j-2;l>0;l--)
		printf("%d",l);
	}
	printf("\n");
	}
	return 0;
}
