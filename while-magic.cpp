//for loop - we know the range 
#include<stdio.h>


main () {
	int a, b, i = 1, x;
	
	while(1) {
//		main MENU
		printf("\nPress 1 for Addition ");
	    printf("\nPress 2 for Odd/Even ");
	    printf("\nPress 3 for N numbers");
	    printf("\npress 4 for Exit\n");
		
//		CHOICE MENU
		printf("\nEnter your choice(1, 2, 3, 4) : \n");
    	scanf("%d", &x);
		
//		SWITCH CASE STARTED 
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
	    case 4:
	    	exit(0);
	    default:
			printf("wrong choice");   
    	}
	}
	
	printf("BUYY BUYY !");
		
}
