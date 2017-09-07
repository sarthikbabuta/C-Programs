#include<stdio.h>
#include<string.h>
main()
{
    char a[50],b[20],c[20];
    int i,j=0,l=0;
    printf("Enter a string:\n");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=32 && a[i]!='\0')
        {
         b[j]=a[i];
		j++;
		}
		else
        {
            
            if(strlen(b)<l)
            b[j]='\0';
            {
                strcpy(c,b);
                l=strlen(b);
            }
            j=0;
        }
    }
    printf("The longest word is:");
    puts(c);
}
