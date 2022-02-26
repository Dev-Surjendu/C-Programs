// * * * * * * * * * *
// * *             * *
// *   *         *   *
// *     *     *     *
// *       * *       *
// *       * *       *
// *     *     *     *
// *   *         *   *
// * *             * *
// * * * * * * * * * *

#include<stdio.h>
main(){
	int x=10, i, j;
	for(i=1; i<=x; i++){
		for(j=1; j<=x; j++) {	
			if(i == 1 || i == x || j ==1 || j== x || i == j || j == x - i + 1) 
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}

//1 10   = 9
//2 9	 = 7
//3 8	 = 5
