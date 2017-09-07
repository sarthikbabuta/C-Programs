 #include<stdio.h>
int main()
{
	int arr1[10],arr2[10],arr3[20],num1,num2,num,i,pos;
	printf("enter the size");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("enter the number of 1st array");
		scanf("%d",&arr1[i]);
    }
	printf("enter the size");
	scanf("%d",&num2);
	for(i=1;i<=num2;i++)
	{
		printf("enter the number of 2nd array");
		scanf("%d",&arr2[i]);
	}
	num=num1+num2;
	for(i=1;i<=num1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(i=1;i<=num2;i++)
	{
		arr3[num1+i]=arr2[i];
	}
	for(i=1;i<=num;i++)
	{
		printf("arr[%d]=%d\n",i,arr3[i]);
	}
    return 0;	
}
