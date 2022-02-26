#include<stdio.h>
main(){
	int num,mod,sum=0,count=0;
	
	printf("enter a number ::");
	scanf("%d",&num);
	
	while(num>0){
	
	mod = num%10;	
	sum =sum*10+mod;
	num=num/10; 
	count++;	
	}
	 printf("%d",count);
	 
	 return 0;
}
