#include<stdio.h>

int main(){
	int count = 1, x;
	
	scanf("%d", &x);

	while(1) {
		if (count > x) break;
		
		printf("%d ", count);
		count++;
	}
	return(0);
}
