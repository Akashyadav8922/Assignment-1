#include<stdio.h>
int main()
{
	char ch;
	int x;
	float y;
	printf("enter any number");
	scanf("%d",&x);
	printf("enter any float number");
	scanf("%f",&y);
	fflush(stdin);
	printf("enter any character");
	scanf("%c",&ch);
	printf("%d\n%f\n%c",x,y,ch);
}
