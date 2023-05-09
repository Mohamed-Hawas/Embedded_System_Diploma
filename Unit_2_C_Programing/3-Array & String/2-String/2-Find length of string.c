//Find length of string

#include <stdio.h>
int main (){
	char str [100];
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
	int i = 0 ;
	while( str[i] != 0 ){
		i++;
	}
	printf("The length of ward : %d", i );

	return 0 ;
}
