//*                 *
//  *             * 
//    *         *    
//      *     *     
//        * *        
//        * *        
//      *     *      
//    *         *    
//  *             *  
//*                 *
#include<stdio.h>
main(){
	int row=10,col=10,i,j;
	for(i = 1; i<=row; i++){
		for(j = 1; j<=col; j++){
			if(i == j || j == row-i+1)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}


