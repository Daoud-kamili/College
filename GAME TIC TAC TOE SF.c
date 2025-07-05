#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>//multimedia system header..for sound
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkwinner();
void drawBoard();

int main()
{
	system(" color 7c");
	int player = 1, i, choice;
	char mark;//we will use either X or 0
	do{
		drawBoard();
		player=(player%2)?1:2;
		printf("player %d, enter the choice : ",player);
		scanf("%d",&choice);
		
		mark=(player == 1)?'x':'0';
		if(choice==1 && square[1]== '1')//here we are checking that if the choice entered by user is 1,and in our table square[1]==1,i.e square[1]is vacant and not occupied		square[1]=mark;
		square[1]=mark;
		else if(choice==2 && square[2]=='2')
		square[2]=mark;
		else if(choice ==3 && square[3]=='3')
		square[3]=mark;
		else if(choice ==4 && square[4]=='4')
		square[4]=mark;
		else if(choice ==5 && square[5]=='5')
		square[5]=mark;
		else if(choice ==6 && square[6]=='6')
		square[6]=mark;
		else if(choice ==7 && square[7]=='7')
		square[7]=mark;
		else if(choice ==8 && square[8]=='8')
		square[8]=mark;
		else if(choice ==9 && square[9]=='9')
		square[9]=mark;
		 else
		 {
		 	printf("invalid option !");
		 	player--;//if player one enters invalid input,he will again get a chance to enter an input
		 	getch();
		 }
		 
		 i=checkwinner();// will return 1 if theres a winner, will ret -1 if game is still in progress,will return zero if game has been drawwn.this loop will keep on executing as long as i=-1
	      player++; //so that player changes from player 1 to player 2
	
	}while(i==-1);
	
	drawBoard();//after loop is terminated it will again draw the board
	
	if (i==1)
	
	{
		printf("player %d won",--player);//upr player ++ se player increment hojaega isle player -- kiya so that correct winner is displayed
	    
	    PlaySound(TEXT("C:\\Users\\daoud\\Desktop\\music for tic tac toe\\Final audio.wav"),NULL,SND_SYNC);//2nd arg is null and 3rd is ound sync..compiler khud se is path ko nai dhundhskta.therefor use linker...go to project>project opt>parameters>linker
	
	}
	
	 else
	 
	 {
	 	printf("game drawn");
	 }
	 
	    getch();
	 	return 0;
	 	
}//main

int checkwinner()
{
	
	if(square[1]==square[2] && square[2]==square[3]){
	
	return 1;
}
	
	else if(square[4]==square[5] && square[5]==square[6])
	{
	
	return 1;
} 
	
	else if(square[7]==square[8] && square[8]==square[9])
	{
	
	return 1;
}
	else if(square[1]==square[4] && square[4]==square[7])
	{
	
	return 1;
}
	
	else if(square[2]==square[5] && square[5]==square[8])
	{
	
	return 1;
}
	
	else if(square[3]==square[6] && square[6]==square[9])
	{
	
	return 1;
}
	
	else if(square[1]==square[5] && square[5]==square[9])
	{
	
	return 1;
}
	else if(square[3]==square[5] && square[5]==square[7])
	{
	
	return 1;//i.e will return winner
}
	
	else if (square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
	{
	return 0; 
}
	else
	{
	  
	
	return -1;
}
	
	
}

void drawBoard()
{
	system("cls");//clears th console
	printf("\n\n\t Tic Tac Toe \n\n");
	printf(" Player1 --> (X)   *************   Player2 --> (0) \n\n\n");
	printf("       |     |        \n");
	printf("  %c    |  %c  |     %c  \n",square[1],square[2],square[3]);
	printf("_______|_____|________ \n");
	printf("       |     |         \n");
	printf("  %c    |  %c  |      %c  \n",square[4],square[5],square[6]);
    printf("_______|_____|________ \n");
	printf("       |     |         \n");
	printf("  %c    |  %c  |      %c  \n",square[7],square[8],square[9]);
    printf("       |     |        \n");
}