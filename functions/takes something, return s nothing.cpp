#include<stdio.h>

void add(int,int);
int main(){
	int x,y;
	
	printf("enter two numbers :");
	scanf("%d%d",&x,&y);

	add(x,y);//actual arguments || call by value
	
return 0;
}

void add(int a,int b)//formal arguments
{
  int c;
	c=a+b;
	printf("sum is %d",c);
}
