#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	float Distance;
	printf("enter point x1");
	scanf("%d",&x1);
	printf("enter point x2");
	scanf("%d",&x2);
	printf("enter point y1");
	scanf("%d",&y1);
	printf("enter point y2");
	scanf("%d",&y2);
	int	p=(x2-x1)*(x2-x1);
	int q=(y2-y1)*(y2-y1);
	int r=p+q;
	Distance=sqrt(r);
	printf("%f",Distance);
}
