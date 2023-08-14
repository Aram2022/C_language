#include <stdio.h>


int main(){

	int arr[] = {14,21,13,22,21,14,22};
	int count = 0;

	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
		if(count == 1) printf("%d\n", arr[i-1]);
		count = 0;

		for(int j = 0; j < sizeof(arr)/sizeof(int); j++){
			if(arr[i] == arr[j]) count++;
		}
	}

}
