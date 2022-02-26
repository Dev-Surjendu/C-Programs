#include<stdio.h>
#include<conio.h>

int calc(int, int, char);

main(){
	int x,y;
	char op;
	
	printf("enter 1st numbers : ");
	scanf("%d",&x);
	printf("enter operator : ");
	scanf(" %c",&op);
	printf("enter 2nd numbers : ");
	scanf("%d",&y);
	
	int res = calc(x, y, op);
	printf("%d %c %d = %d",x,op,y,res);
	
return 0;
}

// with arg, with return 
int calc(int a,int b, char op)
{
	switch(op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}

// Reuseable blocks of Code 

// WAP to print prime number between a user given Range !
// 3 10 - 3 5 7 
// 9 20 - 11 13 17 19
