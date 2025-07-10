#include<stdio.h>
int main()
{
	int sum=0;
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
	
	
 for(int i=0;i<n;i++)
 {
 
 sum+=arr[i];
}
printf("sum= %d",sum);	
	
	
	
}