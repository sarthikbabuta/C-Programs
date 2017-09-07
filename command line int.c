#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i,sum=0,n;
	for(i=0;i<argc;i++)
	{
	n=atoi(argv[i]);
	sum+=n;
	//printf("%d\n",n);
	}
	printf("%d",sum);
	
}
