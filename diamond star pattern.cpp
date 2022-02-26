//         *
//       * * *
//     * * * * *
//   * * * * * * * 
//     * * * * *
//       * * *
//         *
#include<stdio.h>
main() {
    int row = 4, gap=(row*2), i, j, k;
    
    for(i = 1; i <= row; i++) {
		gap = gap - 2;
    	for(k = 1; k <= gap; k++) {
    		printf(" ");
		}
		for(j = 1; j <= (i*2-1); j++) {
			printf("* ");
		}
		printf("\n");
	}
	row=1,gap=2;
	for(i = 3; i>=row; i--){
		for(k=1; k<=gap; k++){
			printf(" ");
		}
		for(j=1; j<=i*2-1; j++){
			printf("* ");
		}
		printf("\n");
			gap=gap+2;
	}	

    return 0;
}
