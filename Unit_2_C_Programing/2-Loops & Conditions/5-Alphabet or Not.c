#include <stdio.h>
int main (){
	char x;
	printf("Enter character : ");
	fflush(stdout);
	scanf("%c", &x);
	//range of alphabets is ASCII code 
	//---range of capitals ------range of small char.
	if ((x >= 65 && x <= 90 ) || (x >= 97 && x <= 122 ))
		printf ("%c is an alphabet" , x);
	else
		printf ("%c is not an alphabet" , x);
	return 0;
}
