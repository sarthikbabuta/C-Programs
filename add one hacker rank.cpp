#include<stdio.h>
#include<math.h>
int main()
{
	int rem,num,result=0,i=0;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
	   {  
	    rem=num%10;
		num=num/10;
		result=result+(rem+1)*pow(10,i);
		i++;
	   } 
    }
	if(result<1000)
	{
		printf("error");
	}
	else if(result>9999)
	{
		printf("overflow");
	}
	else 
	{
		printf("%d",result);
	}
	return 0;
}
