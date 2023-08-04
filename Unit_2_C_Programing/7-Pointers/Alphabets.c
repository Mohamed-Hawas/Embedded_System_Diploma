#include "stdio.h"

void main(){
	
	char alph[26] ;
	char* ptr = alph ;
	for (int i = 0; i < 26 ; ++i )
	{
		*ptr = 'A' + i ;
		ptr++ ;
	}

	ptr = alph ;
	for (int i = 0; i < 26 ; ++i)
	{
		printf("%c  " , *(ptr++) );
	}


 }
