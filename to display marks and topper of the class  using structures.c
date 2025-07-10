#include<stdio.h>
struct student
{
	int roll_no;
	float percentage;
};
int main()
{
	int topper=0;
	int n,i;
	printf("enter the no. of students : ");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the roll no of student :- ");
		scanf("%d",&s[i].roll_no);
		printf("enter the percentage");
		scanf("%f",&s[i].percentage);
	    
	}
	printf("\n");
	printf("ROLL NO AND PERCENTAGE OF STUDENTS :- \n");
	for(int i=0;i<n;i++)
	{
		printf("roll no :--%d\t ",s[i].roll_no);
		printf("percentage :--%.2f\n ",s[i].percentage);
		
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		if(s[i].percentage> s[0].percentage)
		{
			
			printf("roll no of topper of class is: %d and its percentage is : %f",s[i].roll_no,s[i].percentage);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}