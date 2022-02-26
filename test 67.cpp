#include<stdio.h>
main(){
	int num,i;
	
	printf("how many numbers you want to insert ? ");
	 	scanf("%d",&num);
	 	
	int arr[num]; 		
		for(i=0; i<num; i++){
		printf("enter %d number: ", i + 1);
		scanf("%d",&arr[i]);
		printf("\n");
    	}
	
	for(i=0; i<num; i++){
		printf("\nindex - %d || value - %d",i, arr[i]);
	}
	int tempar[num];
	
		for(i=0; i<num; i++){
			tempar[i] = arr[i];
		printf("\nindex - %d || value - %d",i, tempar[i]);
	}
	
	return 0;
}
