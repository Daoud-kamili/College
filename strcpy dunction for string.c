#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="hello";
	char str2[6]="world";
	strcpy(str1,str2);
	printf("%s",str1);
}