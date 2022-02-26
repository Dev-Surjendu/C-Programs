//e
//ed
//edc
//edcb
//edcba
#include<stdio.h>

main(){
	int i , j;
	for(i=101; i>=97;i--)
	{
		for(j=101; j>=i; j--)
		{
			printf("%c",(char)j);
		}
		
		printf("\n");
	}
	
	return 0;	
}
