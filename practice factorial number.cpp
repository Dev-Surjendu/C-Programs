#include<stdio.h>
main(){
	int i, num, mul=1;
	printf("enter a number for find the factorial ::");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		mul = mul * i;
}
	printf("\nyour factorial number is %d ",mul);
	
}
