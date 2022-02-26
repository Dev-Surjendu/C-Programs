//Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially. Go to the editor
//Expected Output :
//Input your firstname: Tom
//Input your lastname: Davis
//Input your year of birth: 1982
//Tom Davis 1982

#include<stdio.h>
main(){
	int x,y,z;
	printf("Input your firstname:");
	scanf("%d",&x);
	printf("\nInput your lastname");
	scanf("%d",&y);
	printf("\nInput your year of birth: ");
	scanf("%d",&z);
	printf("\n%d ",x,y,z);
	return(0);
}
