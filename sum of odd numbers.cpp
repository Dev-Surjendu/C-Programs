// Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
//Test Data
//Input number of terms : 10
//Expected Output :
//The odd numbers are :1 3 5 7 9 11 13 15 17 19
//The Sum of odd Natural Number upto 10 terms : 100
#include<stdio.h>

int main(){
	int user_input, num = 1, num_of_odds = 0, total = 0;
   	
    printf("Input number of terms : ");
    scanf("%d", &user_input);
    printf("The odd numbers are :");
  
//  user_input = 5 , num = 4, num_of_odds = 2

	while(1) {
		if(num_of_odds == user_input) {
			break;
		}
	   
	   	if(num % 2 == 1) { 
			printf("%d ",num);	// 1 3
			num_of_odds++;	// 2
			total = total + num;
		}
		
		num++;	// 5
	}
	
	printf("\nThe Sum of odd Natural Number upto %d terms : %d", user_input, total);
	
	return(0);
}
