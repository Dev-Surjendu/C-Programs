#include<stdio.h>
main(){
	int x,y, cube = 1 ;
	scanf("%d",&x);
	
	for(y=1;y<=3;y++)
		cube = cube * x;

	printf("the cube of the %d number is %d",x, cube);
	
	return(0);
}
