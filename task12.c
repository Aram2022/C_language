#include <stdio.h>

int main(){
	int arr[5];

	printf("enter a number: ");
	int i = 1;
	int min = arr[0];

	while(i < sizeof(arr)/sizeof(int)){
		scanf("%d", &arr[i]);
		if(min > arr[i]) min = arr[i];
		i++;
	}

	i = 1;
	int min2 = arr[0];

	while(i < 5){
		if(min != arr[i] && min2 > arr[i]) min2 = arr[i];
		i++;	
	}

	printf("min = %d\n", min2);

}
