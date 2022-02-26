/* 
Write a C program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
#include<stdio.h>
main()
{
int x = 1,y = 0;
printf("the first 10 natural number is :\n");

while(x <= 5) {
	printf("%d ",x);
    y = y + x;
    
    x++;
} 
	printf("\nthe sum is %d", y);

return(0);	
}

// x = 3
// y = 3
