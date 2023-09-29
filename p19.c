#include<stdio.h>
int main(){
	float f,c;
	printf("Enter the Temperature in Fahrenheit");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("The Temperature in celsius is=%f",c);
}
