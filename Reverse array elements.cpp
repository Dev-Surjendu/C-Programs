#include<stdio.h>
main(){
	int num,i,arr[num];
	
	printf("enter number :");
	 	scanf("%d",&num);
	
	for(i=0; i<num; i++){
		printf("enter %d number:",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
		}
	
	return 0;
}
