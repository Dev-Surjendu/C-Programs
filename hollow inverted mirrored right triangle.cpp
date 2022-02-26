//* * * * * * * * * *
//*               *
//*             *
//*           *
//*         *
//*       *
//*     *
//*   *
//* *
//*
#include<stdio.h>
main(){
	int x=10,i,k;
	for(i=1; i<=x; i++){
		for(k=1; k<=10; k++){
			if(i == 1 || k == x || i == k)
			printf("* ");
			else
			printf("  ");
		}
	printf("\n");
	}
	return 0;
	
}
