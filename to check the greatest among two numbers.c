#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 1st number  :\n");
	scanf("%d",&a);
	printf("enter the 2nd no. :\n");
	scanf("%d",&b);
	int max= (a>b)?a:b;
	printf("the greatest number among the two is %d",max);
	return 0;
}