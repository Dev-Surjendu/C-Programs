//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
#include<stdio.h>
main(){
	int x=5,i,k,j;
	
	for(i=1; i<=x; i++){
		for(j=8; j>=i*2-1 ; j--){
			printf(" ");
		}
		for(k=1; k<=i*2-1; k++){
		
		printf("* ");	
	}
	printf("\n");
}
return 0;	
}
