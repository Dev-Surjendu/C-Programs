#include<stdio.h>
main(){
	int x,mod, sum = 0;
	scanf("%d",&x);
	
	while(x>0)
	{
		mod = x % 10;//2
		//printf("%d",mod);
        sum = sum * 10 + mod;//321
		x=x/10;//1
    }

	
printf("reverse num is %d", sum);


return(0);

}
