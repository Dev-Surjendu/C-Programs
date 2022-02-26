// 9 --> 9*9 = 81 = 8 + 1 = 9 ( 9 == 9 ) neon
// 5 --> 5*5 = 25 = 2 + 5 = 7 ( 7 == 5) not neon
// 7 --> 7*7 = 49 = 4 + 9 = 13 (13 == 8 ) not neon

#include<stdio.h>
main(){
	int x,y,mod,sum=0;
	printf("enter a number :");
    scanf("%d",&x);
    y=x*x;
    printf("%d*%d=%d ",x,x,y);
    while(y>0)
    {
    	mod=y%10;
    	sum=sum+mod;
    	y=y/10;
	}
	printf(" %d",sum);
	
	if(sum==x)
	printf(" x = %d",x);
	printf("neon");
	else
	printf("not neon");
	
	
	return(0);
}
