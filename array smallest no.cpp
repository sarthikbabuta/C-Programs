#include<stdio.h>
int main()
{
int i,num,arr[20],small,position;
printf("Enter the number of elements in the array: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("enter the number");
scanf("%d",&arr[i]);
}
for(i=1;i<=num;i++)
{
if(small>arr[i])
{
small= arr[i];
position=i;
}
}
printf("\n The largest number is: %d and postion=%d",small,position);
return 0;
}

