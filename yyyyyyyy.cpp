//* * * * *
// * * * *
//  * * *
//   * *
//    *
#include<stdio.h>
main(){
	int x=5,i,k,j;
	for(i=1; i<=x; i++){
		
	  for(k=1; k<=i; k++){
		printf(" ");
		}
	   	 for(j=1; j<=x-i; j--){
	   	 	printf("*");
			}
	 printf("\n ");				
	}
	
	return 0;
	
}
