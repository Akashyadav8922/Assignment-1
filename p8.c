#include<stdio.h>
int main(){
	int years,weeks,days,n;
	printf("enter number of days");
	scanf("%d",&n);
	years=(n/365);
	weeks=(n/25);
	days=(n/7);
	printf("years=%d\nweeks=%d\ndays=%d",years,weeks,days);
}
