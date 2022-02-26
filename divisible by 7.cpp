#include<stdio.h>
int main(){
	int num;
	printf("Enter a number ::");
	scanf("%d",&num);
	
	if(num%7 == 0)
		printf("divisible by 7");
	else
		printf("not divisible by 7"); 
	
}
