#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int a=sizeof(arr[0]);
	printf("the elements of this array are:\n\n");
	for(int i=0;i<a;i++)
	{
		printf("%d\n",arr[i]);
		
	}
}