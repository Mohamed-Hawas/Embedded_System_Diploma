#include <stdio.h>
int main (){
	int x , fac = 1;
	printf("Enter number : \n");
	fflush(stdout);
	scanf("%d", &x);

	if ( x < 0)
		printf ("Error !!! \"negative number\"");
	else
		for(int i =1 ; i <= x ; i++ ){
			fac *= i ;
		}
	printf ("Factorial is : %d" , fac);
	return 0 ;
}
