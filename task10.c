#include <stdio.h>


int main(){
	int x, y, z;

	printf("enter number: ");
	scanf("%d", &x);

	printf("enter number: ");
	scanf("%d", &y);

	printf("enter number: ");
	scanf("%d", &z);

	int min = x;

	if(min > y) min = y;
	if(min > z && z < y) min = z;	
	
	int i = min;

	while(i > 0){
		if(x % i == 0 && y % i == 0 && z % i == 0){
			printf("answer is %i\n", i);
			return 0;
		};

		--i;	
	
	}

}
