#include <stdio.h>


int main(){
	
	char str[] = {"AbcbA"};	
	int size = sizeof(str) - 1;
	int count = 0;

	for(int i = 0; i < size; i++){
	
		if(str[i] == str[size - 1 - i]) count++;
	}

	if(count == size) printf("True ");
	else printf("False ");

}
