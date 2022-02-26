#include<stdio.h>
main(){
    
    int x, a, b;
 	char op;
 	
    printf("\nEnter 1st num :");
    scanf("%d", &a);
    
    printf("enter operation ::");
    scanf(" %c", &op);
    
    printf("\nEnter 2nd num :");
    scanf("%d", &b);
    
    
 	switch(op) {
 		
 		case '+':
 			printf("\nAddition  of %d and %d is %d ",a,b,a+b);
 			 break;
 		case '-':
 			printf("\nsubtraction  of %d and %d is %d ",a,b,a-b);
 			 break;
 		case '%':
 			printf("\ndivision  of %d and %d is %d ",a,b,a/b);
			 break; 		
		 case '*':
 			printf("\nmultiplication  of %d and %d is %d ",a,b,a*b);
 			 break;
		default :
			printf("wrong choice");
				
	 }
    
    return 0;
}
