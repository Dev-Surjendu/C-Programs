#include<stdio.h>
main(){
	int x,mod,sum=0,y;
	scanf("%d",&x);
	while(x>0)
	y=x;
	{
		mod=x%10;
		sum=sum*10+mod;
		x=x/10;
			
	}
	if(sum==y)
	printf("palin");
	else
	printf("not palin");
	
	return(0);
}
