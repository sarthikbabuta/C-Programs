#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	float sum=0.0,n;
	for(i=0;i<argc;i++)
	{
	n=atof(argv[i]);
	sum+=n;
	}
	printf("%.1f",sum);
}
