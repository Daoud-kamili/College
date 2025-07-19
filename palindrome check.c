#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int length;
int k=0;
char str[100];
printf("enter the string :-  ");
gets(str);
length=strlen(str);
length=length-1;
while(length>k)
{
	if(str[length]!=str[k])
	{
		printf("%s is not a palindrome ",str);
		exit(0);
	}
	length--;
	k++;
}
printf(" %s is a palindrome",str);














}