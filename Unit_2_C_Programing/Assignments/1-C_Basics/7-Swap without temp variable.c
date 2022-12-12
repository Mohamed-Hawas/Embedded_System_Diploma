//this program swap two numbers of one digit
#include <stdio.h>
int main (){
	float x , y;
	printf("enter value of x :");
	fflush(stdout);
	scanf("%f", &x);
	printf("enter value of y :");
	fflush(stdout);
	scanf("%f",&y);

	x = x*10 + y ;
	y = (int) x/10;
	x = (x/10 - y) * 10 ;
	printf("After swapping, value of x = %f \n", x);
	printf("After swapping, value of y = %f", y);

	return 0;
}


