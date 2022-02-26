#include<stdio.h>
main(){
	int start, stop, num, i;
	float ans;
	
	printf("\nEnter how many numbers you want to insert ?? ");
	scanf("%d", &num);
	int inputs[num];
	
	printf("\nEnter %d values :: \n", num);
	for(i = 0; i<num; i++) {
		scanf("%d", &inputs[i]);
	}
	
	int middle = num / 2;
	if (num % 2 == 0) {
		int prevMiddle = middle - 1;
		
		ans = (inputs[prevMiddle] + inputs[middle]) / 2.0;
	} else {
		ans = inputs[middle];
	}
	
	printf("\nMiddle num = %.1f", ans);
	
	return 0;
}

// 1 2 3 4 5 - 3
// 3 4 5 6 7 - 5
// 10 11 12 13 14 - 12
// 7 2 3 5 1 - 3

