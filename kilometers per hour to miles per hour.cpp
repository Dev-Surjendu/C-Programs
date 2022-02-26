//Write a C program that converts kilometers per hour to miles per hour. Go to the editor
//Expected Output :
//Input kilometers per hour: 15
//9.320568 miles per hour
#include<stdio.h>
main(){
	float x,y;
	printf("Input kilometers per hour:");
	scanf("%f",&x);
	y=x*0.621371;
	printf("%fmiles per hour",y);
	return(0);
	
	
}
