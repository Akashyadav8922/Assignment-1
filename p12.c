#include<stdio.h>
int main(){
	int Average,Maths,English,Hindi,SST,Science;
	float Percentage;
	printf("enter the marks of five subject");
	scanf("%d%d%d%d%d",&Maths,&English,&Hindi,&SST,&Science);
    Average=(Maths+English+Hindi+SST+Science)/5;
    Percentage=(Maths+English+Hindi+SST+Science)/5;
	printf("Average=%d\nPercentage=%f",Average,Percentage);
	
}
