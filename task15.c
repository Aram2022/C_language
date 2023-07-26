#include <stdio.h>


int main(){
	int koxm = 0;

	printf("koxmeri erk: ");
	scanf("%d", &koxm);


	for(int i = 0; i < koxm; i++){
		printf("* ");
	}

	
	for(int j = 0; j < koxm - 2; j++){
		for(int i = 0; i < koxm; i++){
			if(i == 0) printf("\n* ");
			else if(i == koxm - 1) printf("*");
			else printf("  ");
		}
	}

	for(int i = 0; i < koxm; i++){
		if(i == 0) printf("\n* ");
		else printf("* ");
	}
}
