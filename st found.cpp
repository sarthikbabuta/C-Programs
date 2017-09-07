#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch1[100],ch2[100],ch3[100];
	int l1,l2,pos,j,i,temp,flag=0,k,count=0;
	printf("enter st");
	gets(ch1);
	printf("enter st");
	gets(ch2);

	l1=strlen(ch1);
	l2=strlen(ch2);
	for(i=0;ch1[i]!='\0';i++)
	{
		k=i;
		j=0;
		
	 while(ch1[k]==ch2[j])
	{
		k++;
		j++;
		}	
		if(ch2[j]=='\0')
		{
			flag=1;
			pos=i;
			count++;
		}
	}
	if(flag==1)
	{
		printf("%d %d",count,pos);
		}	
		else
		{
			printf("not");
		}
}
	



	
