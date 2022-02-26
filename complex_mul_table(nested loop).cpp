// Write a program in C to display the multipliaction table vertically from n to m. Go to the editor
//Test Data :
//Input upto the table number starting from 1 : 8
//Expected Output :
//Multiplication table from 1 to 8
//1x1 = 1, 1*2 = 2, 1*3 = 3, 1*4 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
//...
//10*1 = 10, 10*2 = 20, 10*3 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
#include<stdio.h>
main() {

int count , num = 1, end ;

scanf("%d %d", &count, &end);

//	using while LOOP
//while(num <= 10) {	
//	while(count<=end) {
//		printf("%d*%d = %d, ",num, count, count*num);
//		count++;
//	}
//	count = 1;
//	printf("\n");
//	num++;
//}

// using for loop
for(int k=1; k <= 10; k++) {
	for(int i=1; i<=end; i++) {
		printf("%d*%d = %d, ",k, i, k*i);
	}
	printf("\n");
}

	return(0);
}





