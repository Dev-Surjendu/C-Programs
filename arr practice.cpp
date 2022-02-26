#include<stdio.h>
main(){
	int num,arr[num],i;
	printf("\nEnter how many numbers you want to insert ?? ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		printf("enter %d number : ",i+1);
		scanf("%d",&arr[i]);
	}
	int sum=0,mul=1,sub=0;
	for(i=0; i<num; i++){
		sum=sum+arr[i];
		mul=mul*arr[i];
		sub=sub-arr[i];
	}
	printf("sum =%d",sum);
	printf("\nmul =%d",mul);
	printf("\nsub =%d",sub);
	return 0;
}
