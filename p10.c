#include<stdio.h>
int main(){
	int n,H,M,S,R;
	printf("enter integer in seconds");
	scanf("%d",&n);
	H=(n/3600);
	printf("H=%d",H);
	R=n%3600;
	M=R/60;
	printf("M=%d",M);
	S=R%60;
	printf("S=%d",S);
}
