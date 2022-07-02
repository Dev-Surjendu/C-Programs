//*
//* *
//* * *
//* * * *
//* * *
//* *
//*
#include<stdio.h>
main(){
	int x=4,i,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	x=1;
	for(i=3; i>=x; i--){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
