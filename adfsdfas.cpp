// 9 --> 9*9 = 81 = 8 + 1 = 9 ( 9 == 9 ) neon
// 5 --> 5*5 = 25 = 2 + 5 = 7 ( 7 == 5) not neon
// 7 --> 7*7 = 49 = 4 + 9 = 13 (13 == 8 ) not neon

#include<stdio.h>
main(){
	int num,mod,x,sum=0;
	scanf("%d",&num);
	
	x = num * num;
	
	while(x>0)
	{
		mod = x % 10;
		sum = sum + mod;
		x=x/10;
    }
    
    printf("%d",sum);
    if(num==sum){
	
    printf("\nneon");}
	else{

    
    printf("\n not neon");
    
}

	return(0);
}
