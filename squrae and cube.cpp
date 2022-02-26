#include<stdio.h>
int main(){
	int num,square,cube;
	printf("Enter a number ::");
	scanf("%d",&num);
	
	square = num*num;
	cube = num*num*num;
	
	printf("square = %d",square);
	printf("\ncube = %d",cube);
	return 0;
}
