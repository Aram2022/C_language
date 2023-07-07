#include <stdio.h>

int main(){
	int x, y, z;

	printf("enter number: ");
	scanf("%d", &x);

	printf("enter number: ");
	scanf("%d", &y);

	printf("enter number: ");
	scanf("%d", &z);

	if(x==y || x==z || y==z){
		if(x>=y && x>=z) printf("big number is %d\n", x);
		if(y>=x && y>=z) printf("big number is %d\n", y);
		else printf("big number is %d\n", z);
	}

}
