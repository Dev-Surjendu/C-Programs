// Write a program that converts Centigrade to Fahrenheit. Go to the editor
//Expected Output :
//Input a temperature (in Centigrade): 45
//113.000000 degrees Fahrenheit.

#include<stdio.h>

main(){
	float cen,fah;
	
	printf("Input a temperature (in Centigrade):");
	scanf("%f",&cen);
	fah= cen * (9.0/5.0)+32;
	printf("%.1f deg Fahrenheit",fah);
	
}


 
 



