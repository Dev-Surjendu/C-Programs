//          +
//          +
//          +
//          +
//+ + + + + + + + + + +        
//          +
//          +
//          +
//          +        
//          +
#include<stdio.h>
main(){
	char i,row=10,col=11,j;
	for(i=1; i<=row; i++){
		for(j=1; j<=col; j++){
			if(i == 5 || j == 11)
			printf("+ ");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
