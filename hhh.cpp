#include<stdio.h>
main(){
	int x,z,y;
	printf("enter a number");
	scanf("%d",&x);

	for(z=1;z<=10;z++)
{
		y=x*z;
	printf("%d*%d=%d\n",x,z,y);
}
	return(0);
	
}
