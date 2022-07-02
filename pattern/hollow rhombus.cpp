//         * * * * * * * * * *
//        *                 *
//       *                 *
//      *                 *
//     *                 *
//    *                 *
//   *                 *
//  *                 *
// *                 *
//* * * * * * * * * * 
#include<stdio.h>
main(){
	int x=10,i,j,k;
	for(i=1; i<=x; i++){
		for(k=0; k<x-i; k++)
		printf(" ");
		
		for(j=1; j<=x; j++){
			if(i == 1 || i == x || j== 1 || j == x)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
	return 0;
	
}
