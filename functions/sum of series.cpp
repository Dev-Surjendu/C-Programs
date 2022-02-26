//1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 + 6!+6
// 
//= 1/1 + 2/2 + 6/3 + 24/4 + 120/5 + 120
//
//= 1 + 1 + 2 + 6 + 24 + 120
//
//= 34 + 120 = 154
#include<stdio.h>
void fact(int);
main(){
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	fact(num);
}
void fact(int a) {
	int i,j,fact;
		for(i=1; i<=a; i++) {
			fact=1;
		for(j=1; j<=i; j++) {
			fact= j*fact;
		}
			printf("%d\n",fact);
			
		}
}
