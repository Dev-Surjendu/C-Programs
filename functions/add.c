#include<stdio.h>

//prototype declaration
int max(int a, int b);


main() {
	printf("======== \n");
	printf("%d", max(10, 111));

	return 0;
}

//with arg int return
int max(int x, int y) {
//	ternary operator
	return x > y ? x : y;
}


//no return - void (null != 0) null means no value
