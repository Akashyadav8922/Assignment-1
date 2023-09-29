#include<stdio.h>
int main(){
	int W1,W2,N1,N2;
	float Average;
	printf("enter the weight of item 1\n");
	printf("enter the no of item 1\n");
	printf("enter the weight of item 2\n");
	printf("enter the no of item 2");
	scanf("%d%d%d%d",&W1,&N1,&W2,&N2);
	Average=(((W1*N1)+(W2*N2))/(N1+N2));
	printf("Average value=%f",Average);
	
	
}
