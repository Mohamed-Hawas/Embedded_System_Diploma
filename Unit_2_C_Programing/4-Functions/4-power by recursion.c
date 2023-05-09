/*
 ============================================================================
 Description : Homework_4 : Functions, Ansi-style
 Author      : Mohamed_Hawas
 Copyright   : Your copyright notice
 ============================================================================
 */
char rev [100 ] ;
int num = 1;
#include <stdio.h>
void pow (int base , int power ){
	if (power > 0){
		num *= base ;
		power-- ;
		pow(base , power);
	}
}

int main() {
	int base , power ;
	printf("Enter base : ");
	fflush(stdin);    fflush (stdout);
	scanf("%d",&base);

	printf("Enter power (positive) : ");
	fflush(stdin);    fflush (stdout);
	scanf("%d",&power);
	pow(base,power);
	printf("Result : %d ",num);
}
