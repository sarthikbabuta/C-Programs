#include<stdio.h>
int main()
{
	int i,m,num,large=0;
	while(i<5)
	{
		printf("enter num");
	    scanf("%d",&num);
		large=large>num?large:num;
		i++;
	}
	printf("%d",large);
	return 0;
}
