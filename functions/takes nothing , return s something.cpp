#include<stdio.h>

int add();
void main(){
	
	int s;
	s=add();
	printf("sum is %d",s);
return 0;
}

int add()
{
  int a,b,c;
  	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	c=a+b;
	
  return(c);// or, (a+b)
}
