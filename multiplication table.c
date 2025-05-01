#include <stdio.h>
int main(){
	int a;
	int b;
	int i;
	printf("enter the number whose table you want to print\t:-- \n");
	scanf("%d",&a);
	printf("enter the limit upto which you want to print the table\t:--\n");
	scanf("%d",&b);
	for(i=0;i<=b;i++)
	{
		printf("%d x %d = %d \n", a,i,a*i);
	}
}