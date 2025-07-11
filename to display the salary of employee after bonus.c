#include<stdio.h>
struct employee
{
	int id;
	char name[40];
	int salary;
	
};
int main()
{
	struct employee e1;
	printf("enter the id of employee :- ");
	scanf("%d",&e1.id);
	printf("\n");
	printf("enter the name of employee :- ");
	scanf("%s",&e1.name);//for char array we dont use the index..onlyl array name
	printf("\n");
	printf("enter the salary of employee :- ");
	scanf("%d",&e1.salary);
	printf("\n");
	printf("DATA OF EMPLOYEE :-\n ");
	printf("id of employee :- %d\n",e1.id);
	printf("name of employee :- %s\n",e1.name);//only array name no index
	printf("salary of employee :- %d\n\n",e1.salary);
	float salary_updated=(e1.salary+0.1*e1.salary);//10% salary increment
	printf("updated salary after bonus = %f",salary_updated);
		
}