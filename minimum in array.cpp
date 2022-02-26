#include<stdio.h>
main(){
	int num,i,min;
	
	printf("how many numbers you want to insert ? ");
	 	scanf("%d",&num);
	
	int arr[num];
	
	for(i=0; i<num; i++){
		printf("enter %d number: ", i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	min=arr[0];
	
	for(i=1; i<num; i++) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	
	printf("\nmin = %d", min);
	return 0;	
}
