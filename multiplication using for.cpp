#include<stdio.h>
main(){
	int x,y,z,h;
	printf("enter a number");
	scanf("%d",&x);
	for(y=1;y<=x;y++){
	for(z=1;z<=10;z++)
	h=y*z;
	printf("%d*%d=%d",y,z,h);
}
	return(0);
	
}
