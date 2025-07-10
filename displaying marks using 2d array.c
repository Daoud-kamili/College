#include<stdio.h>
int main()
{
	int marks[2][3]={10,20,30,40,50,60};
	int i,j;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("marks=%d\t",marks[i][j]);
		}
		printf("\n");
		
	}
	
}