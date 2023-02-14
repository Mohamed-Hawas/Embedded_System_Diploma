//Frequency of characters

#include <stdio.h>
int main (){
	char str [100];
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	fgets(str , sizeof(str) , stdin);

	char ch , times = 0 ;

	printf("Enter a character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for (int i = 0 ; i < sizeof(str) ; i++ ){
		if (ch == str[i]){
			times++;
		}
	}

	printf("Frequency of %c = %d" , ch , times);

	return 0 ;
}
