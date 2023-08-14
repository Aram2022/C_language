#include <stdio.h>


int main(){
	
	int arr[] = {9,-5,0,-3,-8};
	int max = arr[0];
	int max2 = arr[0];

	for(int i = 1; i < sizeof(arr)/4; i++){
		
		if(arr[i] > max) max = arr[i];
	}

	if(max == arr[0]) max2 = arr[1]; 

	for(int i = 1; i < sizeof(arr)/4; i++){
		if(max != arr[i] && max2 < arr[i]) max2 = arr[i];
	}

	printf("%d\n", max2);
}
