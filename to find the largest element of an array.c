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
	
	//int arr [4]={1,2,3,4};
	//int a=sizeof(arr[0]);
int max=arr[0];//first we set the first element as largest
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)//then we compared other elements to 1st element since first one is largest acc to us
		max=arr[i];//if any ele was found to be>arr[0],we assign that array to max...
	}
	printf("largest element of the array is  %d",max);
	
	
	
	
}