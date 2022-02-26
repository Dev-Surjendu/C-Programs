#include<stdio.h>
int add(int);
main() {
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(add(num))
		printf("neon");
	else 	
		printf("not neon");
}

int add(int num) {
	int sum = 0, mod, x=num*num;	
	while (x>0){
		mod = x % 10;
		sum = sum + mod;
		x = x / 10;
		}
		return sum == num;
	}



