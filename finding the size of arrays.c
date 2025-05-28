#include<stdio.h>
int main()
{
	
	int numbers[]={10,20,30,40};   //gives the total size of an array
	printf("%d\n\n",sizeof(numbers));
	
	
	for(int i=0;i<=4;i++)     //gives the size of every individual element of an array
	{
	
	printf("%d\n",sizeof(numbers[i]));
	
    }
	
}