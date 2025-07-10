#include<stdio.h>
struct student
{
	char name[100];
	int Class;
	
};
int main()
{
	struct student s1;
	printf("enter name of s1 :- ");
	scanf("%s",&s1.name);
	printf("name of s1:-  %s",s1.name);
}