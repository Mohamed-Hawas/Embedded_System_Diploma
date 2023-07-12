
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct distance {
	int feet ;
	float inch ;
};

int main()
{
	struct distance sDis1, sDis2, sSum  ;
	//1st
	printf("Enter information of 1st distance :\n");
	printf("Enter feet :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&sDis1.feet);
	printf("Enter inch :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&sDis1.inch);
	//2nd
	printf("\nEnter information of 2nd distance :");
	printf("Enter feet :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&sDis2.feet);
	printf("Enter inch :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&sDis2.inch);
	//sum
	sSum.feet = sDis1.feet + sDis2.feet + (sDis1.inch + sDis2.inch)/12 ;
	sSum.inch = sDis1.inch + sDis2.inch;
	while(sSum.inch > 12 ){
		sSum.inch -= 12 ;
	}
	//Displaying
	printf("\Sum of distances = ");
	printf("%d\' %0.2f\"",sSum.feet,sSum.inch);



	return 0;
}
