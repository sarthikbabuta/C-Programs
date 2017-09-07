#include<stdio.h>
int main()
{
	int num,np=0,nn=0,nz=0;
	printf("enter the no");
    scanf("%d",&num);
    while(num!=-1)
    {
    	if(num<0)
    	{
    		nn++;
		}
	else if(num>0)
        {
		   np++;
	    }
	else
    	{
		   nz++;
	    }
	printf("\nenter the number");
	scanf("%d",&num);
    }
    printf("\nno of pos=%d,no of neg=%d, no of zeros=%d",np,nn,nz);
    return 0;
}
