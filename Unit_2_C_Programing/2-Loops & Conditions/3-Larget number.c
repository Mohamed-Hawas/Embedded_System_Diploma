#include <stdio.h>
int main (){
	float x, y ,z ;
	printf("Enter three numbers : \n");
	fflush(stdout);
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	if ( x > y && x > z)
		printf ("largest number = %f " , x);
	else if ( y > x && y > z)
		printf ("largest number = %f " , y);
	else
		printf ("largest number = %f " , z);
	return 0;
}
