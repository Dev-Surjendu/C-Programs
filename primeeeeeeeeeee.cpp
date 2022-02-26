#include<stdio.h>
main(){
	
	int num,x=1,count=0;
	printf("Enter a number ::");
	scanf("%d",&num);
	while(x<=num){
	
	   if(num%x==0)
			count++;
	   
	   x++;
	   
}
if(count == 2)
	printf("prime");
else 
    printf("not prime");

return(0);
}

