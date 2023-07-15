#include <stdio.h>

int main(){
	int year;

	printf("enter a year: ");
	scanf("%d", &year);

	if(year % 4 == 0) printf("it's a leap year\n");
	else printf("it's a no leap year\n");


}
