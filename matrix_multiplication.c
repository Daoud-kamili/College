#include<stdio.h>
int main()
{
	int m,n,sum=0;
	int a[3][4], b[4][2], result[3][2];
	printf("enter your first matrix:--\n");
	for(int i=0;i<3;i++)//for matrix a
	{
		for(int j=0;j<4;j++)
		{
			printf("enter %d %d element of 1st matrix :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("enter the elements of 2nd matrix :-\n\n");
	
	for(int i=0;i<4;i++)//for matrix b
	{
		for(int j=0;j<2;j++)
		{
			printf("enter %d %d element of 2nd matrix :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<4;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
		
}