#include<stdio.h>
main(){
	int x,z;
	printf("enter a number");
	scanf("%d",&x);
	for(z=1;z<=10;z++)
{
	printf("%d*%d=%d\n",x,z,x*z);
}
	return(0);
	
}
