#include<stdio.h>
main(){
	int num,x=1,multi=1;
	scanf("%d",&num);
	while(num>=x)
	{
		printf("%d",num);
		multi=multi*num;
		num--;
	}
	printf(" \n%d",multi);
	return(0);
	
}
