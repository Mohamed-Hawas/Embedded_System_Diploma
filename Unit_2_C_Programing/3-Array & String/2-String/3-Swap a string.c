//Swap a string

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
	int size = i-1 ;
	char swapedStr [size];
	for(int i = 0 ; i <= size ; i++){
		swapedStr [i] = str[size-i];
	}
	swapedStr [size+1]= 0 ;
	printf("Reversed string : %s",swapedStr);


	return 0 ;
}
