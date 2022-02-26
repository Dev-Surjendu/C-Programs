#include<stdio.h>

int prime(int);

main(){
	int start, end, i;
	
	scanf("%d %d", &start, &end);
	
	for(i=start; i<=end; i++ ) {
		if(prime(i)) {
			printf("%d " ,i);
		}
	}
	return(0);
}

int prime(int num) {
	int x=2;
	
	while(num/2>=x) {
	   if(num%x == 0){
			return 0;
		}
	   x++;
	}
	return 1;
}
