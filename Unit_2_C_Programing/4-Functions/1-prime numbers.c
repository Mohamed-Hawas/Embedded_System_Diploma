/*
 ============================================================================
 Description : Homework_4 : Functions, Ansi-style
 Author      : Mohamed_Hawas
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
int is_prime (int num ){
	if(num == 0 || num == 1)
		return 0 ;

	for(int i = 2 ; i <= num/2 ; i++){
		if( num % i == 0)
			return 0 ;
	}
	return 1 ;
}

int main() {
	printf("Enter two numbers : ");
	fflush(stdin);    fflush (stdout);
	int num_1 ,num_2 ;
	scanf("%d %d", &num_1, &num_2);
	printf("Prime Numbers is :  ");

	for(int i = num_1 ; i <= num_2 ; i++){
			if( is_prime(i) )
				printf("%d  ",i);
		}
}
