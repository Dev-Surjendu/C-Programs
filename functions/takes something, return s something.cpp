#include<stdio.h>

int add(int,int);
int main(){
	
	int a,b,s;
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	s=add(a,b);
	printf("sum is %d",s);
return 0;
}

int add(int x, int y)
{
  int c;
  c=x+y;
	
  return(c);// or, (x+y)
}
