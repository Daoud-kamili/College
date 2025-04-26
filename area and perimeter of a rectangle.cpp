#include<stdio.h>
int main(){
int area;
int perimeter;
int l;
int b;
printf("enter the length of rectangle \n");
scanf("%d",&l);
printf("enter the breadth of rectangle \n");
scanf("%d",&b);
area=l*b;
perimeter= 2*(l+b);
printf("the area of rectangle is %d\n", area);
printf("the perimeter of rectagle is %d", perimeter);
}
