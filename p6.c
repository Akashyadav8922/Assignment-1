#include<stdio.h>
int main(){
	int n,hour,minute;
	printf("enter minutes");
	scanf("%d",&n);
	hour=(n/60);
	minute=(n%60);
	printf("hour=%d,minutes=%d",hour,minute);
}
