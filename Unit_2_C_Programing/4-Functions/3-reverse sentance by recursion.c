/*
 ============================================================================
 Description : Homework_4 : Functions, Ansi-style
 Author      : Mohamed_Hawas
 Copyright   : Your copyright notice
 ============================================================================
 */
char rev [100 ] ;
int i ;
#include <stdio.h>
void reverse (char str [] ){
	if (strlen(str) > 0){
		rev[i++] = str[strlen(str)-1] ;
		str[strlen(str)-1] = '\0' ;
		reverse (str) ;
	}
}

int main() {
	printf("Enter sentence : ");
	fflush(stdin);    fflush (stdout);
	char str [100] ;
	gets(str);
	reverse(str);
	printf("Reversed : %s ",rev);

}
