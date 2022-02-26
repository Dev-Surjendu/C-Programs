#include<stdio.h>
int main(){
	int i=1;
	a: //lable
		if(i<=10){
			if(i%7==0){
				i++;
				goto a;
			}
			printf(" %d",i);
			i++;
			goto a;
		}
	return 0;
}
