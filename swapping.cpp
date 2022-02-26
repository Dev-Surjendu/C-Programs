#include<stdio.h>
int swapping(int &x,int &y){
	int c=x;
	 x=y;
	 y=c;

	


}

int main(){
	int a=10,b=20;
	swapping(a,b);
	printf("%d %d",a,b);
}
