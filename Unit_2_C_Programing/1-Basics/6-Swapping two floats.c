
#include <stdio.h>
int main (){
	float x , y ,tmp ;
	printf("enter value of x :");
	fflush(stdout);
	scanf("%f", &x);
	printf("enter value of y :");
	fflush(stdout);
	scanf("%f",&y);
	tmp = x ;
	x = y;
	y=tmp;
	printf("After swapping, value of x = %f \n", x);
	printf("After swapping, value of y = %f", y);

	return 0;
}


