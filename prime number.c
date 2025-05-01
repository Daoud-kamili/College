#include<stdio.h>
int main(){
	int a;
	int i;
	printf("enter the number which you want to check\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0)
		{
	
		printf("number is not prime");
	}
		else
		{
			printf("number is  prime");
		}
		break;
		}
	}
	
	
	