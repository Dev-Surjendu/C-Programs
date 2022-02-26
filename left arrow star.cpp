//* * * * *
//* * * *
//* * *
//* * 
//*
//*
//* *
//* * *
//* * * *
//* * * * *
#include<stdio.h>
main(){
	int row=10,col=5,i,j;
	
	for(i=1; i<=row; i++){
		for(j=col; j>=1; j--){
			if(j>=i || j > row - i)
				printf("* ");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

//i j
//6 5
//7 5 4
//8 5 4 3
//9 5 4 3 2
