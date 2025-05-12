#include<stdio.h>
int main()
{
	const float pi = 3.14;
	float radius,area;
	printf("enter the radius of the circle  :\n");
	scanf("%f",&radius);
	area= pi*radius*radius;
	printf("area of the circle is : %.2f\t ",area);
	return 0;
}