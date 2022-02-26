// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int x, a, b, sum;
 
    printf("\nPress 1 for Addition ");
    printf("\nPress 2 for Odd/Even ");
    printf("\nPress 3 for N numbers \n");
    
    printf("\nEnter your choice(1, 2, 3) : \n");
    scanf("%d", &x);
    
    if( x == 1 ) {
        printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
        
        printf("\nSum of %d and %d is %d ", a, b, a+b);
    } else if ( x == 2) { 
        printf("\nEnter a number :: ");
        scanf("%d", &a);
        
        if(a % 2 == 0) {
            printf("\n Number is EVen ");
        } else {
            printf("\n Number is ODD ");
        }
    } else if ( x == 3) {
        printf("\n Enter last value :: ");
        scanf("%d", &a);
        
        for(int i=1; i<=a; i++) {
            printf("%d ", i);
        }
    }
   return(0);
}
