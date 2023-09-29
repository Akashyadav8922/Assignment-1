#include<stdio.h>
int main()
{
	char a,b,c,temp;
	a='A';
	b='B';
	c='C';
	printf("Before swap=%c%c%c\n",a,b,c);
	temp=a;
	a=c;
	c=temp;
	printf("After swap=%c%c%c\n",a,b,c);
}
