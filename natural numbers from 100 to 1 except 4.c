#include<stdio.h>
int main()
{
	int i;
	for(i=100;i>0;i--)
	{
		if(i%2==0)
		{
			if(i==4)
			{
				continue;
			}
			printf("%d ",i);
		}
	 } 
}