#include<stdio.h>
int main(){
	int wid,hei,area;
	
	printf("width::");
	scanf("%d",&wid);
	
	printf("height::");
	scanf("%d",&hei);
	
	area = wid*hei;
	printf("area of rectangle = %d",area);
	return 0;	
}
