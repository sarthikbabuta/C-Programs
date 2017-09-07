#include<stdio.h>
int main()
    {
    int A[10],B[10],C[10],i=0,j=0,k=0,size1,size2,newsize;
    printf("Enter the size");
    scanf("%d",&size1);
    for(i=0;i<size1;i++)
    {
    printf("Enter the elements");
     scanf("%d",&A[i]);
    }
    printf("Enter the size");
    scanf("%d",&size2);
    for(j=0;j<size2;j++)
    {
    	printf("Enter the elements");
     scanf("%d",&B[j]);
    }
    newsize=size1+size2;
    i=0,j=0;
    while(i<size1&&j<size2)
    {
      if(A[i]<B[j])
       {
        C[k]=A[i];
        i++;
        k++;
       }         
      else
       {
        C[k]=B[j];
        j++;
       k++;
       }
	}
    if(i==size1)
     {
      while(j<size2)
       {
        C[k]=B[j];
        j++;
        k++;
       }
     }
     else if(j==size2)
     {
      while(i<size1)
       {
        C[k]=A[i];
        i++;
        k++;
       }
    }
     printf("Merged array is:\n");
     for(k=0;k<newsize;k++)
    {
      printf("%d\t",C[k]);
    }
return 0;    
}
