//user input in c program
#include<stdio.h>
int add()

{
	int a,b,sum;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);
	sum=a+b;
	printf("sum of value=%d",sum);
}


main()
{
 add();	
}
