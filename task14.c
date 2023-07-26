#include <stdio.h>

int main(){
	char arr[10];

	printf("enter characters: ");

	for(int i = 0; i < 10; i++){
		scanf("%c", &arr[i]);
	}	
	
	for(int i = 10; i >= 0; i--){
		printf("%c", arr[i]);
	
	}
}
