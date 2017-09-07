#include<stdio.h>
int main()
{
	unsigned int age;
	char gender,ms;
	printf("enter the gender\n");
	scanf("%c",&gender);
	printf("enter the marrital status\n");
	scanf("%s",&ms);
	printf("enter the age\n");
	scanf("%d",&age);
	if(age>18)
	{
		if((gender=='m'|| gender=='M') && (ms=='m' || ms=='M') && age>25)
	    {
		printf("Driver is Insured");
        }
    else if((gender=='m' || gender=='M') && (ms=='u' || ms=='U')&& age>30)
        {
    	printf("Driver is Insured");
		}
	else if((gender=='f' || gender=='F') && age>30	|| (ms=='m' || ms=='M'))
	    {
		printf("Driver is Issured");
	    }
	else if((gender=='f' || gender=='F') && age>35 || (ms=='u' || ms=='U'))
	    {
		printf("Driver is Insured");
	    }
	}
	else 
	    {
	    	printf("Not Insurred");
		}
	return 0;
}
