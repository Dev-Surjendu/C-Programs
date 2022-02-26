// Write a program in C to display the multipliaction table vertically from n to m. Go to the editor
//Test Data :
//Input upto the table number starting from 1 : 8
//Expected Output :
//Multiplication table from 1 to 8
//1x1 = 1, 2*1 = 2, 1*3 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
//...
//10*1 = 10, 10*2 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
#include<stdio.h>
main() {

int count=0, end;
scanf("%d%d",&count,&end);
// using for loop
for(int k=1; k <= 10; k++) {
	for(int count; count<=end; count++) {
		printf("%d*%d = %d",k, count, k*count);
	}
	printf("\n");
}

	return(0);
}
