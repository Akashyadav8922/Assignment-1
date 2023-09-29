#include<stdio.h>
int main(){
	int side;
	float Area;
	printf("enter the side of triangle");
	scanf("%d",&side);
	Area=(sqrt(3)/4)*(side*side);
	printf("Area of equilateral tringle=%f",Area);
}
