#include<stdio.h>
bool prime(int);
int main(){
	
	if(prime(10) == 1) {
		printf("Prime !!");
	}
	else 
	printf("not prime");
	
	
	return 0;
}

bool prime(int num)
{	
	for(int i=2; i<=num/2; i++){
		if(num%2==0)
			return false;
	}
	return true;
}
