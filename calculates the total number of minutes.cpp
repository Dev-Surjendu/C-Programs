//Write a C program that takes hours and minutes as input, and calculates the total number of minutes. Go to the editor
//Expected Output :
//Input hours: 5
//Input minutes: 37
//Total: 337 minutes.
#include<stdio.h>

main(){
	int x,y,z;
	printf("Input hours:");
	scanf("%d",&x);
	printf("Input minutes:");
	scanf("%d",&y);
	z=(x*60)+y;
	printf("Total: %d minutes.",z);
	 return(0);
}
