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
	if(!isalpha(s)){
		printf("Not Alphabet");
	}
	else{
		if(isupper(s)){
			printf("Big");
		}
		else{
			printf("Small");
		}
	}
	printf("\n");
	return 0;
}
