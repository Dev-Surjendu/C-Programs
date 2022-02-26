#include<stdio.h>
#include <math.h>

main(){
	int num, temp, backup, digits = 0, cube = 1, start, mod, sum = 0;
	
	scanf("%d", &num);
	temp = backup = num;
	
	while(temp > 0 ) {
		digits++;
		temp = temp / 10;
	}  
	
	while(num > 0) {
		mod = num % 10;
		
		start = 0, cube = 1;
		while(start < digits) {
			cube = cube * mod; 
			start++;	
		}
		sum = sum + cube;
		
		num = num / 10;
	}
	
	if(backup == sum)
		printf("%d is amstong", sum);
	else
		printf("%d is not amstong", sum);
	
	 
	return 0;
}



