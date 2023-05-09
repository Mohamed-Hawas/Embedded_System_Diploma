#include <stdio.h>
int main (){
	float x , y ,z ;
	printf("enter two floats :");
	fflush(stdout);
	scanf("%f", &x);
	fflush(stdout);
	scanf("%f",&y);
	z= x+y;
	printf("the summation is : %f", z);
	return 0;
}
