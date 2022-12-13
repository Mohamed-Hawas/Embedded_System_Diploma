#include <stdio.h>
int main (){
	char ch ;
	printf("Enter an integer you want to check : ");
	fflush(stdout);
	scanf("%c", &ch);
	if ( ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch=='e'
	  || ch=='A' || ch=='I' || ch=='O' || ch=='U' || ch=='E')
		printf ("%c is vowel " ,ch);
	else
		printf ("%c is constant " ,ch);
	return 0;
}
