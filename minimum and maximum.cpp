#include<stdio.h>
main() {
	int num, mod, min, max;
	
	printf("enter number :: ");
	scanf("%d",&num);	// 567
	
	min = max = num % 10;
	
	while(num > 0) {
		mod = num % 10;
		
		if(min > mod) 
			min = mod;
		if(max < mod)
			max = mod;
					
		num = num / 10;
	}
	
	printf("%d min and %d is max", min, max);
		
	return 0;
}

