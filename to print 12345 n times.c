#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter how many numbers you want to print :--\n");
	scanf("%d",&a);
	printf("enter how many times you want to print :-- \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=a;j++)
		{
			printf("%d",j);
		}
		printf("  ");
	}
}