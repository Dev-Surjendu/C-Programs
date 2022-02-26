#include<stdio.h>
main(){
	int i,x=100,sum1=0,sum2=0;
	
	for(i = 1; i <= x; i++){
	if(i % 2 == 0)
	   sum1 = sum1 + i;	
}
	printf("sum of even numbers are = %d",sum1);
	
	for( i = 1; i <= x; i++){
 	if(i % 2 == 1)
	sum2 = sum2 + i;   	
}
	printf("\nsum of odd numbers are = %d",sum2);
	
	return 0;
}
