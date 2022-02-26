#include<stdio.h>
main(){
	int x,count=0;
	printf("enter a number :");
	scanf("%d",&x);
	while(x>0)
	{
		x=x/10;
		count++;
	}
printf("%d",count);
	return(0);
	
	
	
	
	
}
