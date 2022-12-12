
#include <stdio.h>
int main (){
	int x , y ,z ;
	printf("enter two integers :");
	fflush(stdout);
	scanf("%d", &x);
	fflush(stdout);
	scanf("%d",&y);
	z= x+y;
	printf("the summation is : %d", z);
	return 0;
}

