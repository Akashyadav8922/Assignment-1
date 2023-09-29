#include<stdio.h>
int main(){
	int a,b;
	printf("enter two number:\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	printf("swap number b=%d\n",b);
	a=a-b;
	printf("swap numbers a= %d\n",a);
}
