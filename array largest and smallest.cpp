#include<stdio.h>
int main()
{
	int a[5],i,num,location,position;
	for(i=1;i<=3;i++)
	{
		printf("enter the number");
        scanf("%d",&a[i]);
	    if(a[1]>a[i])
	    {
	    	a[1]=a[i];
	    	location=i;
		}
		
		else
		{
			a[1]=a[i];
			position=i;
		}
	}
	printf("smallest=%d location=%d",a[1],location);
	printf("largest=%d position=%d",a[1],position);
	return 0;
}
