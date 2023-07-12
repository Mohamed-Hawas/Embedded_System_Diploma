
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct imaginary  {
	float real ;
	float imag ;
};

struct imaginary add_complex_num (struct imaginary sNum1 , struct imaginary sNum2);

struct imaginary add_complex_num (struct imaginary sNum1 , struct imaginary sNum2){
	struct imaginary sSum ;
	sSum.real = sNum1.real + sNum2.real ;
	sSum.imag = sNum1.imag + sNum2.imag ;
	return sSum ;
}
int main()
{
	struct imaginary sNum1, sNum2 ,sSum ;
	//1st
	printf("For 1st complex number : \n");
	printf("Enter real and imaginary respectively :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&sNum1.real);
	scanf("%f",&sNum1.imag);

	//2nd
	printf("For 2nd complex number : \n");
	printf("Enter real and imaginary respectively :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&sNum2.real);
	scanf("%f",&sNum2.imag);
	//sum
	sSum = add_complex_num(sNum1 , sNum2);
	//Displaying
	printf("\nSum of numbers = ");
	printf("%0.2f+%0.2fi",sSum.real,sSum.imag);

	return 0;
}
