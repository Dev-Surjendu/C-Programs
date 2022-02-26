#include<stdio.h>
int rev(int);
main(){
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(rev(num))
		printf("palin");
	else
		printf("not palin");
}

int rev(int a) {
	int mod, sum = 0, z = a;
	while(a>0){
		mod = a % 10;
		sum = sum * 10 + mod;
		a = a / 10 ;
	}
	return sum == z;
}
