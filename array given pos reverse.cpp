#include<stdio.h>
int main() 
{
    int i,j,num,arr[100],pos;
    printf("enter the size");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        {
        	printf("enter the number");
        scanf("%d",&arr[i]);
    }
    printf("enter the pos");
    scanf("%d",&pos);
    for(i=1;i<=pos;i++)
        {
        printf("%d\n",arr[i]);
    }
    for(i=num;i>pos;i--)
        {
        printf("%d\n",arr[i]);
    }
    return 0;
}
