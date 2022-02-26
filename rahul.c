#include<stdio.h>

main() {
int i=1,x,y,z;
printf("1. addition");
printf("\n2. odd-even");
printf("\n3. printing n numbers");
 
printf("\nenter your choice "); 

scanf("%d",&x);
 
if(x==1) {
	printf("enter two numbers");
    scanf("%d%d",&y,&z);
    printf("sum of %d and %d is %d",y,z,y+z);
} else if(x==2) { 
    printf("enter a number");
    scanf("%d",&y);

 	if (y%2==0)
 		printf("%d number is even",y);
 	else
 		printf("%d number is odd",y);      
} else if(x==3) {
	
	printf("enter a number");
	scanf("%d", &z);	// 5
  	
	  while(i<=z) {		// 1 <= 8
  		printf("%d",i);	// 	8
  		i++;		// 9
	}
}	
}
