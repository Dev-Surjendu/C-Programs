#include<stdio.h>
main(){
    
    int x, a, b;
 
    printf("\nPress 1 for Addition ");
    printf("\nPress 2 for subtraction ");
    printf("\nPress 3 for division");
    printf("\nPress 4 for multplication");
    printf("\nEnter your choice(1, 2, 3, 4) : \n");
    scanf("%d", &x);
    
    switch(x) {
      case 1:
	    printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
          printf("\nAddition  of %d and %d is %d ", a, b, a+b);
        break; 
      case 2:
	    printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
          printf("\nsubtraction of %d and %d is %d ", a, b, a-b);
        break;
      case 3:
	    printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
          printf("\ndivision of %d and %d is %d ", a, b, a/b);
        break;
      case 4:
	    printf("\nEnter two numbers :: ");
        scanf("%d %d", &a, &b);
          printf("\nmultplication of %d and %d is %d ", a, b, a*b);
        break;
    
    default:
		printf("wrong choice");
}
	return 0;
}
