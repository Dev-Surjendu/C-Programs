//******
//*
//*
//*
//*
//******
//     *
//     *
//     *
//******

#include<stdio.h>
main(){
	int i, col = 5, row = 10, j, k;
	char ch = '*';
	
//	scanf("%c", &ch);
	
	for(i=1; i<=row; i++) {
		for(j=1; j<=col; j++) {
			if(i == 1 || i == col || i == row || (i <= 5 && j == 1) || (i >= 6 && j == col))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	} 
	
	return 0;
}
