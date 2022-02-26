// Write a C program that prints the perimeter of a rectangle to take its height and width as input. Go to the editor
//Expected Output :
//Input the height of the Rectangle : 5
//Input the width of the Rectangle : 7
//Perimeter of the Rectangle is : 24.000000

#include<stdio.h>

main(){
	float x,y,z;
	printf("Input the height of the Rectangle :");
	scanf("%f",&x);
	printf("\nInput the width of the Rectangle :");
	scanf("%f",&y);
	z=2*(x+y);
	printf("\nPerimeter of the Rectangle is : %f",z);
	
	
	return(0);
	
	
}
