#include<stdio.h>
int main()
{
	int numbers[]={10,20,30,40};
	/*char grades[]= {'a','b','c'}; this is how to make an array of characters
	                             or
	                             char name[]="dao ud"  ...here ele 1 =d,ele2=a,ele3=o,ele4=space,ele5=u....*/
	
	//printf("%c",grades[0]);	to display the first element of the array
	
	//TO CHANGE THE ELEMENTS OF THE ARRAY IN A PROGRAM:---
	numbers[0]=100;
	numbers[1]=200;
	numbers[2]=300;
	numbers[3]=400;
//	char name[]="dao ud";
	
	printf("%d\n",numbers[0]);
	printf("%d\n",numbers[1]);
	printf("%d\n",numbers[2]);
	printf("%d\n",numbers[3]);
//	printf("%c\n",name[3]); will print space
	
	
	
	
	
}