//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4
//5 6 7 8 9 8 7 6 5

#include<stdio.h>
main(){
	int x=5,i,k,j;
	
	for(i=1; i<=x; i++){
		for(k=i; k<=9-i; k++) 
			printf(" ");
			
		for(k=i; k<i*2; k++){
			printf("%d ", k);
		}
		
		for(k=i*2-2; k>=i; k--){
			printf("%d ", k);
		}
		printf("\n");
	}
	
	return 0;
	
}


//1 
//3 2
//5 4 3
//7 6 5 4
//9 8 7 6 5

