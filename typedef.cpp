#include<stdio.h>

// global scope 

enum student {
	Raj = 98, Rahul = 99, Rai = 97, Suraj = 96, Joy = 95
};


int main () {
	enum student s = Raj;
	
	float x = 3.14;
//	type casting 
	int a = (int) x;
	
//	bitwise operator (& | ^)
	int xxxx = 5 | 3;
	
	printf("%d", xxxx);
} 

//0101
//0011
//0001 = 1
