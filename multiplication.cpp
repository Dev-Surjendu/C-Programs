/*Write a program in C to display the multiplication table of a given integer. Go to the editor
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 */

#include<stdio.h>
main()
{
int a=1,b; 	
printf("input the number:");
scanf("%d",&b);
	
	
while(a<=10){
	printf("%d*%d = %d\n",b,a,b*a);
	a++;
	
}	
	
return(0);	
	
	
	
}




