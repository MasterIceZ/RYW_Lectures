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
	char a;
	scanf("%c", &a);
	printf("%c",isupper(a)?tolower(a):toupper(a));
	printf("\n");
	return 0;
}
