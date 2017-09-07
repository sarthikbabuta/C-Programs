#include<stdio.h>
int main()
{
	int m,n,i;
	printf("enter the year");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{ 
	  if((m%4==0 && m%100!=0)||(m%400==0))	
	   { 
	    printf("leap year:%d\n",m);	
	   }
    }
	return 0;
}
