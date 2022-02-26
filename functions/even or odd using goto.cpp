//wap to print odd nd even using goto statement.
#include<stdio.h>
int main(){
	int num;
	printf("enter a number ::");
	scanf("%d",&num);
	
	if(num%2==0)
		goto even;
	else
		goto odd; 
	
	even:
		printf("even = %d",num);
		exit;
	odd:
		printf("odd = %d",num);
}
