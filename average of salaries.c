struct employee
{
	int id;
	int salary;
};
int main()
{
	int i,n,sum=0;
	float average;
	printf("enter the number of employees :- ");
	scanf("%d",&n);
	struct employee s[n];
	for(i=0;i<n;i++)
	{
		printf("enter the id of employee :- ");
		scanf("%d",&s[i].id);
		printf("enter the salary of employee :- ");
		scanf("%d",&s[i].salary);
	}
	 printf("\n");
	 printf("DETAILS OF EMPLOYEES :--\n\n");
	 for(int i=0;i<n;i++)
	 {
	 	printf("ID of employee is :-- %d\n",s[i].id);
	 	printf("SALARY of employee is :-- %d\n",s[i].salary);
	 	 sum=sum+s[i].salary;
	 }
	 average = sum/n;
	 printf("avg salary = %f",average);
	
}