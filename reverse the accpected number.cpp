#include<stdio.h>
main(){
	int num,i,mod,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		mod = num % 10;
		sum = sum*10 + mod;
		num = num/10;
	}
	printf("reverse = %d",sum);
}
