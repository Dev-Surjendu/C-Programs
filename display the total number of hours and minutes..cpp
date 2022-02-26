//Write a program in C that takes minutes as input, and display the total number of hours and minutes. Go to the editor
//Expected Output :
//Input minutes: 546
//9 Hours, 6 Minutes
#include<stdio.h>

main(){
 
    int x,y,z;
    
    printf("Input minutes:");
    scanf("%d",&x);
    y=x/60;
    z=x%60;
    printf("%d hours,%d minutes",y,z);
 return(0);
	
}
