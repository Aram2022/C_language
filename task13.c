#include <stdio.h>


int main(){
	char arr[10];
		
	printf("enter : ");

	for(int i = 0; i < 10; i++){
		scanf("%c", &arr[i]);	
	};

	for(int i = 0; i < 10; i++){
		if(arr[i] > 47 && arr[i] < 58)	printf("%c\n", arr[i]);
	}
	
}
