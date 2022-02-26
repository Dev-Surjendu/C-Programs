// Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
//Test Data
//Input number of terms : 10
//Expected Output :
//The odd numbers are :1 3 5 7 9 11 13 15 17 19
//The Sum of odd Natural Number upto 10 terms : 100
#include<stdio.h>
main()
{
 int x,y=1;
 printf("input number of terms :");
 scanf("%d\n",&x);
 	
 if(x % 2 == 1){
 
 
printf("the odd numbers are %d :",x);
}
while(y<=x){
	printf("%d",y);
	y++;
	
}
 
	
	return(0);
	
	
}
