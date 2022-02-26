// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int x, a, b, sum;
 
    printf("\nPress a for Addition ");
    printf("\nPress b for Odd/Even ");
    printf("\nPress c for N numbers");
    printf("\npress d for Exit\n");
    printf("\nEnter your choice(1, 2, 3) : \n");
    scanf("%d", &x);
    
    switch(x) {
      case 1:
	    printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
          printf("\nSum of %d and %d is %d ", a, b, a+b);
        break; 
	case 2: 
        printf("\nEnter a number :: ");
        scanf("%d", &a);
        
        if(a % 2 == 0) {
            printf("\n Number is EVen ");
        } else {
            printf("\n Number is ODD ");
        }break;
    case 3:
    	
        printf("\n Enter last value :: ");
        scanf("%d", &a);
        
        for(int i=1; i<=a; i++) {
            printf("%d ", i);
    
        } break;
    default:
		printf("wrong choice");   
    }
   return(0);
}
