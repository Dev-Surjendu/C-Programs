//edcba
//edcb
//edc
//ed
//e
#include<stdio.h>
main(){
	int i , j;
	for(i=97; i<=101;i++)
	{
		for(j=101; j>=i; j--)
		{
			printf("%c",(char)j);
		}
		
		printf("\n");
	}
	
	return 0;
	
	
}
