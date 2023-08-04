#include "stdio.h"

void main(){
 	
 	int m = 29 ;
 	printf("m = %d \nAddress of m =0x%x \n",m , &m );

 	int* ab = &m ;
 	printf("Now ab is assigned with the address of m\n");
 	printf("Address of pointer ab : 0x%x \nContent of pointer ab : %d \n",ab , *ab );

 	m = 34 ;
 	printf("The value of m assigned to 34 now\n");
 	printf("Address of pointer ab : 0x%x \nContent of pointer ab : %d \n",ab , *ab );
}
