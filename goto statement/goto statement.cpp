#include<stdio.h>

int main () {
	int x, count = 1;
	
	scanf("%d", &x);
	
	here:
		printf("%d ", count);
		count++;
	if (count <= x) goto here;
} 

//0101
//0011
//0001 = 1
