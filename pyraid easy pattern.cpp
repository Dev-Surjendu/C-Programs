//        *
//      *   *
//    *       *
//  *           *
//* * * * * * * * *
#include<stdio.h>

main() {
	int row = 10, i, j;
	
	for(i=1; i<=row; i+=2) {

		for(j=1; j<=i; j++) {
			if(i == 9,  j == row-i+1 )
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
