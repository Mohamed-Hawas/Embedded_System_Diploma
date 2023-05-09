//Transpose Array

#include <stdio.h>
int main (){
	int rows , columns ;
	printf("Enter rows and columns of matrix : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d" , &rows);
	scanf("%d" , &columns);
	int array [rows][columns];
	//take input and sum it

		printf("Enter the elements of matrix : \n");
		for(int i = 0 ; i<rows ; i++){
			for (int j =0 ; j<columns ; j++){
			printf("Enter element a%d%d ",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%d" , &array [i][j]);
			}
		}
		//print entered matrix
		printf("Entered matrix : \n");
			for(int i = 0 ; i<rows ; i++){
				for (int j =0 ; j<columns ; j++){
					printf("%d  " , array[i][j] );
				}
				printf("\n");
			}

		//transpose matrix
		int transArray [columns] [rows] ;
			for(int i = 0 ; i<rows ; i++){
				for (int j =0 ; j<columns ; j++){
					transArray[j][i] = array[i][j] ;
				}
			}

		//print entered matrix
			printf("Transposed matrix : \n");
			for(int i = 0 ; i<columns ; i++){
				for (int j =0 ; j<rows ; j++){
					printf("%d  " , transArray[i][j] );
				}
				printf("\n");
			}

	return 0 ;
}


