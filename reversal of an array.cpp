#include<stdio.h>
int main()
{
	int i,n;
	int arr[100];
	
	printf("enter the size of array : ");
	scanf("%d",&n);
	printf("enter the elements of the array :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are :  ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Reversed array = ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
	
	
	
}