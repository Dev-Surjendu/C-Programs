#include<stdio.h>
#include<ctype.h>
 main(){
 	char x;
 	scanf("%c",&x);
 	
 	if(islower(x))
 		printf("Lowercase");
	else if (isupper(x))
		printf("Uppercase");
	else if(isdigit(x))
		printf("Digit");
	else
		printf("special char");
		  	
 	return(0);
 }
