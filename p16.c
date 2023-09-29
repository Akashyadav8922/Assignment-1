#include<stdio.h>
int main(){
	int Distance,fuel;
	float Average;
	printf("enter the distance in km");
	scanf("%d",&Distance);
	printf("enter the fuel spent in liters");
	scanf("%d",&fuel);
	Average=(Distance/fuel);
	printf("Average consumption(km\\lt)=%f",Average);
	
	
}
