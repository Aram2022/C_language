#include <stdio.h>


int main(){

	int side = 0;
	scanf("%d", &side);

	for(int i = 0; i <= side; i++){

		for(int j = 0; j < i; j++){
			printf("* ");
		}
		printf("\n");
	
	}


}
