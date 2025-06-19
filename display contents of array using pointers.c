#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int *ptr = arr;
	printf("array elements are :");
	for(int i=0;i<7;i++)
	{
		printf("%d",*(ptr+i));
	}
}