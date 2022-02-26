//Write a C program that calculates the volume of a sphere. Go to the editor
//Expected Output :
//Input the radius of the sphere : 2.56
//The volume of sphere is 70.276237.
#include<stdio.h>

main(){
	float r, pi = 3.14, v;
	printf("Input the radius of the sphere : ");
	scanf("%f",&r);
	v = (4.0/3.0) * pi * (r*r*r);	
	printf("%.2f",v);
	return(0);
}
