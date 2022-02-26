//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
#include<stdio.h>
main(){
	int x=5,i,k,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=4; i>=1; i--){
		for(j=1; j<=5-i; j++){
			printf(" ");
		}

		for(k=1; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
	
}

//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*


