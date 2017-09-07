#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,square;
	printf("enter the nnumber");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		square=i*i;
		if(square>=a && square<=b)
		{
			printf("%d",c);
		}
	}
	
	return 0;
}
