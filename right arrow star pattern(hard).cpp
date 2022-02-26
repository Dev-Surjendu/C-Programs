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
	char ch;
	
	scanf("%c", &ch);
	
	for(i=1; i<=row; i++) {
		for(j=1; j<=col; j++) {
			if(j >= i || j > row-i)
				printf("%c", ch);
			else
				printf(" ");
		}
		printf("\n");
	} 
	
	return 0;
}



