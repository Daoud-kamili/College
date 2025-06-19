#include<stdio.h>

void swap(int *a ,int *b)
{

int c= *a;
*a=*b;
*b=c;
};


int main()
{
	int a=10;
	int b=20;
	printf("value of a is : %d\n",a);
	printf("value of b is : %d\n",b);
	swap(&a,&b);
	printf("swapped value of a is :%d\n",a);
	printf("swapped value of b is  :%d\n",b);
}