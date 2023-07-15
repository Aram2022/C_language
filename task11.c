#include <stdio.h>

int main(){
	int num = 0;

	printf("enter number: ");
	scanf("%d", &num);

	if((num & (1<<4)) == 0){
		num |= (1<<4);
	};

	printf("%d\n", num);
}
