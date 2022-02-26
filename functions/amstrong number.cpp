#include<stdio.h>
int cube(int);
main() {
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	
	if(cube(num) == num)
		printf("amstrong number");
	else
		printf("not amstrong number");

return 0;
}

int cube(int a) {
	int mod, mul, sum=0;
	while(a > 0) {
		mod = a % 10;
		mul = mod * mod * mod;
		sum = sum + mul;
		a = a / 10;
	}
return sum;
}
