//Search on Array

#include <stdio.h>
int main (){
	int size , element ;
	printf("Enter no of elements : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d", &size );
	int array [size] ;
	for (int i = 0 ; i < size ; i++ ){
		scanf("%d" , &array[i]);
	}

	printf("Enter the element to be searched : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d", &element );
	for (int i = 0 ; i < size ; i++ ){
			if (element == array[i]){
			printf("Element found at location : %d", i+1 );
			}
		}
	return 0 ;
}
