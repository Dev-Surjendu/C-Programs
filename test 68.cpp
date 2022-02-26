#include<stdio.h>
main(){
	int num,i, num1;
	
	printf("1st-how many numbers you want to insert ? ");
	scanf("%d",&num);
	 	
	int arr[num]; 		
	for(i=0; i<num; i++) {
		printf("enter %d number: ", i + 1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
    	
    printf("2nd-how many numbers you want to insert ? ");
	scanf("%d",&num1); 
	 	
    int temparr[num1];
    
    for(i=0; i<num1; i++){
		printf("enter %d number: ", i + 1);
		scanf("%d",&temparr[i]);
		printf("\n");
    }
    
    	
    int total = num + num1;
    int mergeArr[total];
    
    for(i=0; i<num; i++) {
    	mergeArr[i] = arr[i];
	}
	
	int count = 0;
	for(i=num; i<total; i++) { 
		mergeArr[i] = temparr[count];
		count++;
	}
	
	printf("\n mergearr ::\n ");
	for(i=0; i<total; i++) {
		printf("%d ", mergeArr[i]);
	}
}
