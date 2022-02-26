#include<stdio.h>
void even_odd(int no){
	if(no%2==0)
		goto even;
	else
		goto odd; 
	
	even:
		printf("%d",start);
	
	odd:
		printf("\n%d",start);
}
int main(){
	int num;
	printf("Enter a number ::");
	scanf("%d",&num);
	
	even_odd(num);
}
