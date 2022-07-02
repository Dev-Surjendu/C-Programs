//* * * * * * * * * *
// * * * * * * * * *
//  * * * * * * * *
//   * * * * * * *
//    * * * * * *
//     * * * * *
//      * * * *
//       * * *
//        * *
//         *
#include<stdio.h>
main(){
	int x=1,i,j,k;
	for(i=10; i>=x; i--){
		for(k=11; k>i; k--){
			printf(" ");
		}
		for(j=1; j<=i; j++){
		
		printf("* ");
	}
printf("\n");
}
return 0;
}
