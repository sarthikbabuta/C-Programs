#include<stdio.h>
int main()
{
	int a[10],c1=0,c2=0,c3=0,c4=0,c5=0,i;
	for(i=1;i<=10;i++)
	{
	printf("enter the number");
	scanf("%d",&a[i]);
    if(a[i]<40)
    {
    	c1++;
    	printf("0-39 is %d\n",c1);
    	for(i=1;i<=c1;i++)
    	{
    	printf("*");
        }
    }
	if(39<a[i]&&a[i]<60)
	{
		c2++;
		printf("40-59 is %d\n",c2);
		for(i=1;i<=c1;i++)
		{
		printf("*");
	    }
	}
	if(59<a[i]&&a[i]<75)
	{
		c3++;
		printf("60-74 is %d\n",c3);
		for(i=1;i<=c3;i++)
		{
		printf("*");
	}
	}
	if(74<a[i]&&a[i]<90)
	{
		c4++;
		printf("75-89 is %d\n",c4);
	for(i=1;i<=c4;i++)
    {
	printf("*");
	}
    }
	if(89<a[i]&&a[i]<101)
	{
	c5++;
	printf("90-100 is %d\n",c5);
	for(i=1;i<=c5;i++)
	  {  
		printf("*");
	  }
    }
   }
   printf("0-39 is %d\n",c1);
    	for(i=1;i<=c1;i++)
    	{
    	printf("*");
        }
         printf("40-59 is %d\n",c2);
    	for(i=1;i<=c2;i++)
    	{
    	printf("*");
        }
         printf("60-74 is %d\n",c3);
    	for(i=1;i<=c3;i++)
    	{
    	printf("*");
        }
         printf("75-89 is %d\n",c4);
    	for(i=1;i<=c4;i++)
    	{
    	printf("*");
        }
         printf("90-100 is %d\n",c5);
    	for(i=1;i<=c5;i++)
    	{
    	printf("*");
        }
	return 0;
}
