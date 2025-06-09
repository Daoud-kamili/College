#include<stdio.h>
int main()
{
	int arr[5]={0};
	for(int i=0;i<5;i++)
	{
		printf("enter an element:  ");
		scanf("%d",&arr[i]);
	}
	printf("the elements of the array are:  ");
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
		
	}
	
}