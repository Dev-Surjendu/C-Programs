#include<stdio.h>
main(){
	int i,num,sum=0,mod, mul=1;
	printf("enter a number : ");
	scanf("%d",&num);	// 145
	int temp = num;
	
	while(num>0){
	  	mod = num %10;
		sum = sum+mod;
		num = num/10;	
}
	for(i=1; i<=sum; i++){
		mul =mul*i;
	}
	printf("%d\n",mul);
	
	num=temp,sum=0;
	while (num > 0) {	// 145
	    mul = 1;	// IMPORTANT
		mod = num % 10; 
		
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

