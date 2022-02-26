//Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
//Test Data
//Input number of terms : 10
//Expected Output :
//The odd numbers are :1 3 5 7 9 11 13 15 17 19
//The Sum of odd Natural Number upto 10 terms : 100


#include<stdio.h>
main(){
	int x,y=1, count = 0;
	printf("input number of terms : ");
	scanf("%d",&x);  // 5
	
	while(1) { // 1 = true = infinte loop
		// 5 == 5
		if(count == x) {
			break;
		} 
		
		
		if(y % 2 == 1) {
			printf("%d ",y);
			count++;
		}
			
		y++; // 10
	}
	
	return(0);	
}

// user_input - 5
// now - 1 3 5
// expected - 1 3 5 7 9 

// user_input - 3
// now - 1 3 
// expected - 1 3 5 

// user_input - 10
// now - 1 3 5 7 9 
// expected - 1 3 5 7 9 11 13 15 17 19


// 10 % 5 = 0
// 9 % 3 = 0
// 8 % 3 = 1
// 3 % 10 = 3
// 5 % 19 = 5

