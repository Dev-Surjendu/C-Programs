#include<stdio.h>

int reverse(int num) {
	int mod, sum = 0;
	while(num > 0) {
		mod = num % 10;
		sum = sum * 10 + mod;		
		num = num / 10;
	}
	
	return sum;
}


main(){
	int num,addition=0,sum=0,mod,multi=1;
	printf("enter n number :");
	scanf("%d",&num);	// 567
	
	num = reverse(num);	// 765
	
	while(num > 0) {
		mod = num % 10;//5 //6
		addition = addition + mod;
		multi = multi * mod;
		sum = sum * 10 + mod;//5//56		
		num = num / 10;//76
	}
	printf("addition = %d",addition);
	printf("\nmultiplication = %d",multi);
	
	return 0;
}
