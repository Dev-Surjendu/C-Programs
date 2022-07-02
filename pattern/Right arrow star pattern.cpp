//* * * * *
//  * * * *
//    * * *
//      * *
//        *
//        *
//      * *
//    * * *
//  * * * *
//* * * * *
#include<stdio.h>
main(){
	int row = 5, i,j,k;
	
	for(i=row; i>=1; i--){
		for(k=row; k>i; k--){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	} 
	for(i=row; i>=1; i--) {
		for(k=1; k<=(i*2-2); k++) {
			printf(" ");
		}
		
		for(j=i; j<=row; j++) {
			printf("* ");
		}
		printf("\n");
	} 
	return 0;
	
	
}
