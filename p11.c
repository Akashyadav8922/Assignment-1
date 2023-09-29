#include<stdio.h>
int main(){
	int Pr,T;
	float R,CI;
	printf("enter principle\ntime\nrate");
	scanf("%d%d",&Pr,&T);
	scanf("%f",&R);
	CI=Pr*pow((1+R/100),T);
	printf("compound interest is =%f",CI);
	
}
