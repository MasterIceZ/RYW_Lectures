/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int main(){
	int n, m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
