#include<stdio.h>
main(){
	int num,i,arr[num],sum=0,multi=1,sub=0,div=0;
	printf("enter number :");
	 	scanf("%d",&num);
	
	for(i=0; i<num; i++){
		printf("enter %d number:",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
		}
	for(i=0; i<num; i++){
		sum=sum+arr[i];
	}
		printf("sum = %d",sum);
		
	for(i=0; i<num; i++){
		multi=multi*arr[i];
	}
		printf("\nmulti = %d",multi);
		
	for(i=0; i<num; i++){
		sub=arr[i]-sub;
	}
		printf("\nsub = %d",sub);
				
	for(i=0; i<num; i++){
		div=div/arr[i];
	}
		printf("\ndiv = %d",div);
								
	return 0;
}
