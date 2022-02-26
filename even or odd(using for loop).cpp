#include<stdio.h>
main(){
    int x,y;
    printf("enter a number : ");
    scanf("%d",&x);
    
    printf("Even numbers are = ");
	for(y=1;y<=x;y++){
		if (y%2==0) 
			printf("%d ",y);		
	}
	
	printf("\nOdd numbers are = ");
	for(y=1;y<=x;y++){
		if (y%2!=0) 
			printf("%d ",y);		
	}
     
	return(0);
}

