#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e=0,f=0,g=0,h=0,i,sum=0;
	printf("enter the nnumber");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a%2==0)
	{
		e=a*10;
	}
	else if(b%2==0)
	{
		f=b*50;
	}
	else if(c%2==0)
	{
		g=c*100;
	}
	else if(d%2==0)
	{
		h=d*500;
	}
	i=e+f+g+h;
	sum=sum+i;
	printf("%d",sum);
	return 0;
}
