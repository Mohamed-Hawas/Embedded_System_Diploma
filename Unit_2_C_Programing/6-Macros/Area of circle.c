#include "stdio.h"
#define pi 3.14

int main(){
	float radius ,area ;
	printf("enter the radius");
	scanf("%f", &radius);
	area = 2*pi*radius;
	printf("The Area is %0.2f",area);
}