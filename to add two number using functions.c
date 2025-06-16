#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}




int main()
{
	int a,b;
	printf("enter the 1st number\n");
	scanf("%d",&a);
	printf("enter the 2nd number\n");
	scanf("%d",&b);
	
	int sum= add(a,b);
	printf("sum of two numbers= %d \n",sum)
;
}