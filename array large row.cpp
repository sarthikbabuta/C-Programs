#include<stdio.h>
int main()
{
	int n,i,arr[100][100],row,large,small,j;
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
	    { 
		printf("enter the element");
		scanf("%d",&arr[i][j]);
     	}
   }
   printf("enter the row");
   scanf("%d",&row);
   large=arr[row][0];
   for(j=0;j<n;j++)
   {
   	if(arr[row][j]>large)
   	{
   		large=arr[row][j];
	} 
   }
   small=arr[row][0];
   for(j=0;j<n;j++)
   {
   	if(arr[row][j]<small)
   	{
   		small=arr[row][j];
    }
	   
   }
   printf("%d %d",large,small);
   return 0;
}
   
	

