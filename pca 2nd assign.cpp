#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter 1st number ::");
	scanf("%d",&num1);
	printf("Enter 2nd number ::");
	scanf("%d",&num2);
		
	if(num1>num2)
		printf("smallest number is %d",num2);
	else	
		printf("smallest number is :: %d",num1);
	return 0;
}
