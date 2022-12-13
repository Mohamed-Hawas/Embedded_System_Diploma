//this program swap two numbers of any digits
#include <stdio.h>
int main (){
	float x , y;
	int digits , n=100 ;//this to swap any number

	printf("enter value of x :");
	fflush(stdout);
	scanf("%f", &x);

	printf("enter value of y :");
	fflush(stdout);
	scanf("%f",&y);

	printf("How many digits consist this number :");
	fflush(stdout);
	scanf("%d",&digits);

	for (int i = 0; i<digits ; i++){
		n *= 10 ;
	}
	x = x*n + y ;
	y = (int) x/n;

	x = (int)((x/n - y) * n) ;
	printf("After swapping, value of x = %f \n", x);
	printf("After swapping, value of y = %f", y);

	return 0;
}


