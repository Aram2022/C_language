#include <stdio.h>

int main(){

	int num1, num2, num3, num4;
	int total = 0;

	printf("enter number 1: \n");
	scanf("%d", &num1);
	printf("enter number 2: \n");
	scanf("%d", &num2);
	printf("enter number 3: \n");
	scanf("%d", &num3);
	printf("enter number 4: \n");
	scanf("%d", &num4);
	
	if(num1 + num2 + num3 + num4 == 0){
		if(num1 < num2 && num1 < num3 && num1 < num4) printf("Smallest number is %d\n", num1);

		if(num2 < num1 && num2 < num3 && num2 < num4) printf("Smallest number is %d\n", num2);
	
		if(num3 < num2 && num3 < num1 && num3 < num4) printf("Smallest number is %d\n", num3);
	
		if(num4 < num2 && num4 < num3 && num4 < num1) printf("Smallest number is %d\n", num4);
	}
	
	
}
