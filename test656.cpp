#include<stdio.h>
main(){
	int num,i,max;
	
	printf("how many numbers you want to insert ? ");
	 	scanf("%d",&num);
	
	int arr[num];
	
	for(i=0; i<num; i++){
		printf("enter %d number: ", i + 1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	max=arr[0];
	
	for(i=1; i<num; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	
	printf("\nmax = %d", max);
	return 0;	
}
