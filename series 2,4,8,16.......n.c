#include<stdio.h>
int main()
{
	int i,n,term=2;
	printf("enter the limit of series :- \n");
	scanf("%d",&n);
	//int sum=0;
	for(i=1;i<=n;i++)
	{
		printf("%d ",term);
		term=term*2;
		
		
	}
	
}