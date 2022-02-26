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
	int i, col = 5, row = 10, j, k;
	
	for(i=1; i<=row; i++) {
		for(j=1; j<=col; j++) {
			if(j >= i || j > row-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	} 
	
	return 0;
}

