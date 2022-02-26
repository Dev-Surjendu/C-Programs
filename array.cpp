#include<stdio.h>

main(){
	int MAX = 5;
	int arr[MAX], i, sum = 0;
	
	for(i = 0; i < MAX; i++) {
		printf("Enter value of %d position:: ", i + 1);		// showcase
		scanf("%d", &arr[i]);
		printf("\n");	// showcase
	}
		
//	sum 
	for(i = 0; i < MAX; i++) {
		sum = sum + arr[i];
	}
	
	printf("sum = %d", sum);
		
	return 0;
}
