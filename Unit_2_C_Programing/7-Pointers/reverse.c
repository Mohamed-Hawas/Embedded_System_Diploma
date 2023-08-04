#include "stdio.h"
#include "string.h"
void main(){
	char* str  ;

	printf("Input : ");
	fflush(stdout);
	gets(str);
	for (int i = strlen(str)-1 ; i >= 0 ; --i)
	{
		printf("%c",*(str + i));
	}
 }
