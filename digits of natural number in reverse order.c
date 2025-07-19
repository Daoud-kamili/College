#include<stdio.h>
int main()
{
	int n,digit;
	printf("enter  the natural number :- \n");
	scanf("%d",&n);
	printf("digits in reverse order are : \n");
	while(n>0)
	{
		digit=n%10;
		printf("%d",digit);
		n=n/10;
		
	}
}