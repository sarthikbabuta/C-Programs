#include<stdio.h>
#define pr printf("enter the number\n");
#define pr1 printf("your result is\n");
#define square(x) x*x
#define cube(x) square(x)*x
#define fourth(x) cube(x)*x
#define fifth(x) fourth(x)*x
int main()
{
	int result1,result2,result3,result4,x;
	pr	
	scanf("%d",&x);
	result1=square(x);
	result2=cube(x);
	result3=fourth(x);
	result4=fifth(x);
	pr1
	printf("square=%d\ncube=%d\nfourth=%d\nfifth=%d",result1,result2,result3,result4);
	return 0;
}
