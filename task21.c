#include <stdio.h>


int main(){
	
	int arr1[] = {7,18,9,10,-4};
	int arr2[] = {3,-6,2,1};
	int newarr[(sizeof(arr1)+sizeof(arr2))/sizeof(int)];

 	for(int i = 0; i < sizeof(arr1)/4; i++){
	
		newarr[i] = arr1[i];
	}

	for(int i = sizeof(arr1)/4; i < sizeof(newarr)/4; i++){
	
		newarr[i] = arr2[i-sizeof(arr1)/4];
	}

	for(int i = 0; i < sizeof(newarr)/4; i++){
		printf("%d ", newarr[i]);
	}

}


