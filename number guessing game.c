#include<stdio.h>
#include<stdlib.h>//standard library header file
#include<time.h>
int main()
{
	int guesses=0;
	int num;
	srand(time(0));/*if we didnt used time(0) then rand 
	                   would generate the same number every 
					   time we run this program*/
	
	
	int randomNumber =(rand()%100)+1;//generates number from 1 to 100
	do{
	
	printf("guess the number : \n\n");
	scanf("%d",&num);
	if(num>randomNumber)
	{
	printf("too high\n\n");
	}
	else if(num<randomNumber)
	{
	printf("too low\n\n");
    }
    else
    {
    	printf("congrats!you guessed the number\n");
	}
	guesses++;
	
}
while(num!=randomNumber);
printf("you guessed the number in %d guesses",guesses);
}