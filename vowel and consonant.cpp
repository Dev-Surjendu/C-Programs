#include <stdio.h>
#include <ctype.h>

main(){
	char x;
	scanf("%c",&x);
	
	x = toupper(x);
	
	if (x =='A' || x=='E' ||x =='I'||x=='O' || x =='U')
        printf("vowel");
	else
		printf("consonant");

	return(0);
	
	}
	
//	switch(x)
//    {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//		case 'u':
//            printf("vowel !");
//            break;
//        default:
//            printf("");
//    }

