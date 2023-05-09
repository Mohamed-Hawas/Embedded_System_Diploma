//Calculate Average using Array

#include <stdio.h>
int main (){
	float sum = 0 , input ;
	float array [6];
	//take input and sum it

		printf("Enter the number of data : 6 \n");
		for(int i = 0 ; i<6 ; i++){
			printf("%d. Enter number : ",i+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f" , &input);
			array [i] = input ;

		}


	for(int i = 0 ; i<6 ; i++){
	   sum += array[i];
	}
	printf("Average = %0.2f", sum/6 );
	return 0 ;
}
