#include<stdio.h>
main(){
	int i,num,sum=0,mod, mul;
	printf("enter a number : ");
	scanf("%d",&num);	// 145
	int temp = num;
	
	while (num > 0) {	// 145
	    mul = 1;	// IMPORTANT
		mod = num % 10; // 5
		
		for(i=1; i<=mod; i++) {
			mul = mul*i;	
		}
		sum += mul;
		num = num/10;
	}
	
	if(temp==sum)
	printf("krishna murthy");
	else
	printf("not krishna murthy");
	
}	
//                                             
//1 = 1                                        
//2 = 4                                        
//3 = 10                                       
//4 = 20                                       
//5 = 25                                       
//                                             
//1 + (1+2) + (1+2+3)  = 1 + 3 + 6 = 10        
//                                             
//                                             
//2                                            
//                                             
//1 + (1+2)                                    
//                                             
//5                                            
//                                             
//1 + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5)


