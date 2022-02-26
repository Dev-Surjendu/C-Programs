#include<stdio.h>
int palindrome(int a){
	int mod,sum=0;
	while(a>0)
	{
		mod=a%10;
		sum=sum*10+mod;
		a=a/10;
	}
	return sum;
}

int main(){
	int x,z,res;
	
	printf("Enter the number ::");
	scanf("%d",&x);
	z=x;
	
	res=palindrome(x);

	if(z==res)
	
	printf("palindrome number");
	else
	
	printf("not palindrome number");

return 0;	
}

