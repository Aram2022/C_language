#include  <stdio.h>

int main(){
	int num;

	printf("enter number over 12: ");
	scanf("%d", &num);

	if(num <= 12){
		printf("try again\n");
		return 0;
	};

	int digit = 0;

	while(num != 0){	
		digit += num%10;
		num /= 10;
	};

	printf("%d", digit);
}
