#include<stdio.h>
int main(){
	float P,T,R,SI;
	printf("Enter Principal,Time and Rate");
	scanf("%f%f%f",&P,&T,&R);
	SI=(P*R*T)/100;
	printf("The Simple Interest=%f",SI);
}
