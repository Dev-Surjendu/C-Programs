//* * * * * * * * * *
// *               *
//  *             *
//   *           *
//    *         *
//     *       *
//      *     *
//       *   *
//        * *
//         *

#include<stdio.h>
main(){
	int x=10,i,j,k;
	for(i=1; i<=x; i++){	// row
		for(j=1; j<=x; j++) {	// column
			if(i == 1 || j == i || )
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
return 0;
}

//1 - 1
//3 - 2
//5 - 3
//7 - 4

