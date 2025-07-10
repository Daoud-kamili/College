#include<stdio.h>
struct student
{
	int roll_no;
	char name[40];
	float marks;
};
int main()
{
	int a;
	printf("enter no. of students :-- ");
	scanf("%d",&a);
	printf("\n");
	struct student s[a];
	printf("enter student record  :-- \n\n");
	for(int i=0;i<a;i++)
	{
		printf("enter the name of student  : ");
		scanf("%s",&s[i].name);
		printf("enter the roll no of student  : ");
		scanf("%d",&s[i].roll_no);
		printf("enter the marks of student  : ");
		scanf("%f",&s[i].marks);
	}
	printf("\n");
	
	printf("STUDENT RECORD:---\n\n");
	
	for(int i=0;i<a;i++)
	{
		printf("name : %s\n",s[i].name);
		printf("roll no. : %d\n",s[i].roll_no);
		printf("marks : %f\n",s[i].marks);
	}	
	
	
	
	
	
}