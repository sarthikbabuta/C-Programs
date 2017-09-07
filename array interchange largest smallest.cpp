#include <stdio.h>
int main()
{
int i, n, arr[20], temp;
int small,small_pos =0;
int large,large_pos = 0;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n Enter the value of element %d: ",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	small=arr[0];
if(arr[i]<small)
{
small = arr[i];
small_pos = i;
}
large=arr[0];
if(arr[i]>large)
{
	
large = arr[i];
large_pos = i;
}
}
printf("\n The smallest number: %d", small);
printf("\n The position of the smallest number: %d",small_pos);
printf("\n The largest number: %d", large);
printf("\n The position of the largest number: %d",large_pos);
temp = arr[large_pos];
arr[large_pos] =arr[small_pos];
arr[small_pos] = temp;
printf("\n The new array is: ");
for(i=0;i<n;i++)
printf(" \n arr[%d] = %d ", i, arr[i]);
return 0;
}

