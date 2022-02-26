#include<stdio.h>
main(){
	int x,y=0;
	printf("enter a number :");
	scanf("%d",&x);
	while(x>0)
	{
		x=x/10;
		y++;
	}
printf("%d",y);
	return(0);
	
}
//
//1
//123
//12
//1
//2340
