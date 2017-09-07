#include<stdio.h>
int main()
{
	char a[50],b[50],c[50];
	int i,j=0,n=0,pos,n1=0;
	printf("enter the string: ");
	scanf("%[^\n]s",a);
	while(a[i]!='\0')
	{
		n++;
		i++;
	}
	printf("enter second strng: ");
	scanf(" %[^\n]s",b);
	i=0;
	while(b[i]!='\0')
	{
		n1++;
		i++;
	}
	printf("entre the pos :");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		c[j]=a[i];
		j++;
	}
	i=pos;
	for(j=0;j<n1;j++)
	{
		a[i]=b[j];
		i++;
	}
	for(j=0;c[j]!='\0';j++)
	{
		a[i]=c[j];
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	
}
