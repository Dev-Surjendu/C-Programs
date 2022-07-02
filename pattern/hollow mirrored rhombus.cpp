//* * * * * * * * * *
// *                 *
//  *                 *
//   *                 *
//    *                 *
//     *                 *
//      *                 *
//       *                 *
//        *                 *
//         * * * * * * * * * *
#include<stdio.h>
main(){
	int x=10,i,k,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=i; j++){
			printf(" ");
		}
		for(k=1; k<=x; k++){
		
		 	if(i == 1 || i == x || k == 1 || k == x)
		       printf("* ");
		    else 
		    printf("  ");
		}
	printf("\n");	
} 
return 0;
}
