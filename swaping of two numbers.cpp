#include<stdio.h>
int main(){
	int a;
	int b;
	printf("enter the value of a \t :");
	scanf("%d",&a);
	printf("enter the value of b \t :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped values of a and b are respectively \t: %d,%d \t", a,b);
}