#include<stdio.h>
int main()
{
	FILE *fp;
	char str[100];
	int age;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open");
	}
	else
	{
		fscanf(fp,"%s%d",&str,&age);
		fprintf(fp,"%s%d\n",str,age);
		fclose(fp);
	}
	return 0;
}
