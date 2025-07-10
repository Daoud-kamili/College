#include<stdio.h>
struct student
{
	char name[100];
	int Class;
	int marks;
	char section[100];
};
int main()
{
	struct student s1={"daoud",2,100,"A"};
	struct student s2={"kamili",2,99,"B"};
	printf("name of s1 is : %s",s1.name);
	printf("\n");
	printf("name of s2 is %s",s2.name);
}