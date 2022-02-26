#include<stdio.h>

int fact(){
	int num,i,mul=1;
	
	printf("Enter a number ::");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		mul=mul*i;
	}
	return(mul);
}


int main(){

	printf("factorial = %d",fact());
	return 0;
}

