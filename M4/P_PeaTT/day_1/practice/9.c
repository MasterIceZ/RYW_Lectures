/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n == 0){
		printf("Zero Integer");
	}
	else{
		printf("%s Integer",n>0?"Positive":"Negative");
	}
	printf("\n");
	return 0;
}
