#include<stdio.h>

main() {
	float cen, fan;
	
	printf("Input a temperature (in Centigrade):");
	scanf("%f",&cen);
	
	fan = cen * ((float)9 / 5) + 32;
	
	printf("\n%.9f", fan);
}
