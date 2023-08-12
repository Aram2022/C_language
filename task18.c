#include <stdio.h>

int main(){
	
	int arr[5];
	int x = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
		
		
	for(int i = 0; i < 5; i++)  
	{
		for(int j = 0; j < 5; j++)
		{
			if(arr[i] < arr[j])
			{
				x = arr[j];
				arr[j] = arr[i];
				arr[i] = x;
			}		
		} 	      
	}

	for(int i = 0; i < 5; i++)
	{
		printf("\n%d",arr[i]);
	}
	
}
