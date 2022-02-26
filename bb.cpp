#include<stdio.h>
main(){
	int x,sum=0, mod;
	printf("enter a number : ");
	scanf("%d",&x);
	
	while(x>0)
	{
		mod = x % 10;
		printf("\nmod = %d", mod);
		sum = sum + mod;
		printf("\nsum = %d", sum);
		x=x/10;
		printf("\nx = %d", x);
    }
	
printf("%d",sum);
	return(0);
}
	
	

