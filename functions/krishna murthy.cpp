#include<stdio.h>
int krishna(int);
int fact(int);

main(){
	int num;
	printf("enter a number :");
	scanf("%d", &num);
	
	if(krishna(num) == 1) {
		printf("krishna Murti ");
	} else {
		printf("Not krishna Murti ");
	}
}

int krishna (int x){
	int mod, sum=0, temp = x;

	while(x>0) {       //145
		mod = x % 10; //5
		sum = sum + fact(mod);
		x = x / 10;
	}
	return temp == sum;
}

int fact(int num) {
	int mul = 1, i;
	for(i=1; i<=num; i++){
		mul = mul*i;
	}
	return mul;
}

// reusable block of code.


