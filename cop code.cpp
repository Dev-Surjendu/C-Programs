#include<stdio.h>

int findLowest(int num) {
	int rem, small = 10;
	
	while(num != 0) {
		rem = num % 10;
		small = small > rem ? rem : small;
		num /= 10; 
	}
	return small;
}

int findLargest(int num) {
	int rem, large = -1;
	
	while(num != 0) {
		rem = num % 10;
		large = large > rem ? large : rem;
		num /= 10; 
	}
	return large;
}


int findkey(int input1, int input2, int input3) {
	int low1 = findLowest(input1);
	int low2 = findLowest(input2);
	int low3 = findLowest(input3);
	
	int larg1 = findLargest(input1);
	int larg2 = findLargest(input2);
	int larg3 = findLargest(input3);
	
	return ((low1 + low2 + low3) - (larg1 + larg2 + larg3) );
}

int main() {
	int key = findkey(3521, 2452, 1352);
	
	printf("%d", key);
}

