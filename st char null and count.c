#include<stdio.h>
#include<strings.h>
int main()
{
	char ch[6][100],count=0;
    int i;
  	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!='\0'||ch[i]==' ')
		{
			count++;
		}
	}
	if(strlen(ch)==0)
		{
			printf('0');
		}
		else
		{
			printf("%d",count+1);
		}
	return 0;	
}
