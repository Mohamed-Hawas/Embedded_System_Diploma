
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct student {
	char name [100] ;
	int roll ;
	int degree ;
};

int main()
{
	struct student SStudent  ;
	printf("Enter information of students :\n");
	printf("\nEnter name :");
	fflush(stdin); fflush(stdout);
	gets(&SStudent.name);
	printf("Enter roll number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&SStudent.roll);
	printf("Enter degree :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&SStudent.degree);
	//Displaying
	printf("\nDisplaying information\n\n");
	printf("Name : %s\n",SStudent.name);
	printf("Roll num : %d\n",SStudent.roll);
	printf("Degree num : %d\n",SStudent.degree);



	return 0;
}
