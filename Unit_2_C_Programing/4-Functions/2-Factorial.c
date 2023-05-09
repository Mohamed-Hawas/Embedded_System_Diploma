/*
 ============================================================================
 Description : Homework_4 : Functions, Ansi-style
 Author      : Mohamed_Hawas
 Copyright   : Your copyright notice
 ============================================================================
 */
int fact_num = 1 ;
#include <stdio.h>
int factorial (int num ){
	if ( num > 0 ){
		fact_num *= num ;
		factorial (num-1);
	}
	return fact_num ;
}

int main() {
	printf("Enter number : ");
	fflush(stdin);    fflush (stdout);
	int num_1  ;
	scanf("%d", &num_1);
	printf("Factorial is : %d ",factorial(num_1));
}
