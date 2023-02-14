//Example of Multidimensional Array

#include <stdio.h>
int main (){
	int a = 1 , input=0 ;
	int array [2][2]= { {0 , 0 } , { 0 , 0} };
	//take input and sum it
	while (a < 3){
		printf("Enter elements of matrix %d \n",a);
		for(int i = 0 ; i<2 ; i++){
			for(int j = 0 ; j<2 ; j++){
				printf("Enter a%d%d : ",i+1,j+1);
				fflush(stdin);  fflush(stdout);
				scanf("%d" , &input);
				array [i][j] += input ;
			}
		}
		a++ ;
	}
	printf("Sum of matrix : \n");
	for(int i = 0 ; i<2 ; i++){
	    for(int j = 0 ; j<2 ; j++){
				printf( "   %d" , array [i][j] );
			}
			printf("\n");
		}

	return 0 ;
}
