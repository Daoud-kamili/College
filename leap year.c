#include<stdio.h>
int main()
{
	int y;
	printf("enter the year which you want to check :-- ");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		printf("the year %d is leap year",y);
	}
	else 
	{
		printf("year is %d not leap",y);
	}
}