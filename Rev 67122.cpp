#include<stdio.h>
main(){
	int num,i,arr[num], tempArr[num];
	
	printf("enter number :");
	 	scanf("%d",&num);
	
	
	for(i=0; i<num; i++){
		printf("enter %d number:",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}

	int j = 0;
	for(i=num-1; i>=0; i--){
		tempArr[j] = arr[i];
		j++;
	}
	
	printf("Original array values :: ");
	for(i=0; i<num; i++){
		printf("\nindex - %d || value - %d",i, arr[i]);
	}
	
	
	printf("\n\nReverse array values :: ");
	for(i=0; i<num; i++){
		printf("\nindex - %d || value - %d",i, tempArr[i]);
	}
	
	return 0;
}
