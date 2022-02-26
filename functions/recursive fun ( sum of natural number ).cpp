#include<stdio.h>
int natural(int no){
	if(no>0){
		printf(" %d",no);
		return no + natural(no-1);
	}
}

int main(){
	int num;
	printf("Enter the nth term ::");
	scanf("%d",&num);
	
	printf("\nsum of natural number is %d",natural(num));     //calling natural fun and passing the arguent num
	return 0;
}

