// Write a program in C to display the cube of the number upto given an integer. Go to the editor
//Test Data :
//Input number of terms : 5
//Expected Output :
//Number is : 1 and cube of the 1 is :1
//Number is : 2 and cube of the 2 is :8
//Number is : 3 and cube of the 3 is :27
//Number is : 4 and cube of the 4 is :64
//Number is : 5 and cube of the 5 is :125
#include<stdio.h>
main(){
	
	int x=1,y,z;
	
	printf("Input number of terms :");
	scanf("%d",&y);
	while(x<=y){
	z=x*x*x;
	printf("\nNumber is : %d and cube of the %d is :%d",y,y,z);
	x++;
    }
	return(0);
	
}