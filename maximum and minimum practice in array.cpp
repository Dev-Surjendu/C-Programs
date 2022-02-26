#include<stdio.h>
int main(){

	int i,arr[5];
	for(i = 0; i<5; i++){
		printf("Enter %d number ::",i+1);
		scanf("%d", &arr[i]);
	}	
	int min = arr[0], max =arr[0];
	
	for(i = 1; i<5; i++) {
		if(min > arr[i]) 
		    min = arr[i];
		if(max < arr[i]) 
			max = arr[i];
	}

	printf("\n min = %d", min);
	printf("\n max = %d", max);

	return 0;	
}

