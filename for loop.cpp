#include<stdio.h>
main(){
	int x=1,y=0;
	scanf("%d",&y);
	 
	 while(x<=y){
	 
	 	printf(" %d",x);
	 	y=y+x;
	 	x++;
	 
	 }
	 printf("sum = %d",y);
	return(0);
	
}
