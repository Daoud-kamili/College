#include<stdio.h>
int main()
{
	int marks;
	printf("enter you marks  :-\n");
	scanf("%d",&marks);
	if(marks >90)
	{
		printf("Grade = A");

	}
	else if(marks >80 && marks<=90)
	{
	printf("Grade = B");
	}
	else if(marks>70 && marks<=80)
	{
		printf("Grade = C");
	}
	else
	{
		printf("fail");
	}
}