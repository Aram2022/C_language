#include <stdio.h>

int main(){
	
	int arr[5];
	int total = 0;

	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
		scanf("%d", &arr[i]);
		total += arr[i];
	}

	printf("%d", total);

}
