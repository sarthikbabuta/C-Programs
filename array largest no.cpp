#include<stdio.h>
int main()
{
int i,num,arr[20],large,position;
printf("Enter the number of elements in the array: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("enter the number");
scanf("%d",&arr[i]);
}
for(i=1;i<=num;i++)
{
if(arr[i]>large)
{
large = arr[i];
position=i;
}
}
printf("\n The largest number is: %d and postion=%d", large,position);
return 0;
}

