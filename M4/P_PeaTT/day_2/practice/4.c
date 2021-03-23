/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

char s[4][33];

int main(){
	for(int i=0;i<3;++i){
		scanf(" %s", s[i]);
	}
	for(int i=2;i>=0;--i){
		printf("%s\n", s[i]);
	}
	printf("\n");
	return 0;
}
