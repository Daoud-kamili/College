#include<stdio.h>
void value(int b)
{
	 b =b+20;
	printf("the value of b inside function is  %d",b);
}


int main()
{
int a=10;
printf("value of a outside function = %d \n",a);
value(a);	
}