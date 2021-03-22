/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>
#include<ctype.h>


int main(){
	char s;
	scanf("%c", &s);
	if(isupper(s)){
		if(s!='Y' && s!='Z'){
			printf("%c",s+2);
		}
		else{
			printf("%c",'A' + abs('X' - s)-1);	
		}
	}
	else{
		if(s!='y' && s!='z'){
			printf("%c",s+2);
		}
		else{
			printf("%c",'a' + abs('x' - s)-1);	
		}
	}
	printf("\n");
	return 0;
}
