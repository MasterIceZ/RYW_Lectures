/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int main(){
	int n, x;
	int mark = 0;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d", &x);
		if(x == 0){
			mark = 1;
		}
	}
	printf("%s",mark?"Have":"Don\'t have");
	printf("\n");
	return 0;
}
