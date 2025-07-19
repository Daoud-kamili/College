#include<stdio.h>
int main()
{
	int b;
	printf("enter your choice :\n");
	scanf("%d",&b);
//	a=b;
	switch(b)
	{
		case 1:
		printf("salam");
		break;
				
		case 2:
		printf("hello");
		break;
		
		case 3:
		printf("hi");
		break;
		
		default:
		printf("invalid input");		
			
	}
}