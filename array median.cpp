#include <stdio.h>
int main()
{
int i,num;
float median,arr[10];
printf("Enter the size of the array");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("Enter the values");
scanf("%f",&arr[i]);
}
if(num%2==0)
median=(arr[num/2]+arr[num/2+1])/2.0;
else
median=arr[num/2+1];
printf("MEDIAN=%f",median);
return 0;
}
