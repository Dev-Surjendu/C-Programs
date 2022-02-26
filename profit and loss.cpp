#include<stdio.h>
int main(){
	int cp,sp,profit,loss;
	printf("Enter cost price ::");
	scanf("%d",&cp);
	printf("Enter selling price ::");	
	scanf("%d",&sp);
	profit=((sp-cp)*100)/cp;
	loss=((cp-sp)*100)/sp;
	
	if(cp==sp)
		printf("no profit nor loss");
	else if(cp<sp)
		printf("%d percent profit",profit);
	else
		printf("%d percent loss",loss);
	return 0;
}
