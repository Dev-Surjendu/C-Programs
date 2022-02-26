#include<stdio.h>
main(){
	
	int num,x=2,count=0;
	scanf("%d",&num);
	while(x<num){
	
	   if(num%x==0){
	   	printf("%d ", x);
			count++;
			break;		   
		}
		
	   x++;
	   
}
if(count == 0)
	printf("prime");
else 
    printf("not prime");

return(0);
}

