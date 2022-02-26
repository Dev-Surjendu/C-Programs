#include<stdio.h>
int main(){
	int i=1;
	a:
		printf(" %d",i);
		i++;
	if(i<=3)
		goto a;
	else if (i>3 & i<=5)
		goto b;
	
	b:
		printf("\n \n ix2 = %d",i*2);
		
		printf("\n...................")       ;
}
