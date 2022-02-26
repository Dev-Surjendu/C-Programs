#include<stdio.h>
main(){
	int x,y=1;
	scanf("%d",&x);
	while(y<=x){
	
	 if(y%x==0)
	 {
	 	printf("%d",y);
	 	y++;
	 }
     }
	return(0);
	
}
