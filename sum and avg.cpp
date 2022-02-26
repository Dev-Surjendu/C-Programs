/*Write a program in C to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000   */

#include<stdio.h>
main()
{
	int start, end,sum=0, count = 0;
	
	printf("Enter starting range :: ");
	scanf("%d", &start);
	
	printf("Enter ending range :: ");
	scanf("%d",&end);
	
	while(start<=end){
		printf( " %d",start);
		sum =sum+start;
		start++;
		count++;
	}
	printf("\nthe sum of number is %d ",sum);
	
	printf("count - %d", count);
	
	printf("\nthe avg is %.2f",(float)sum/count);
	
	
	return(0);
}
