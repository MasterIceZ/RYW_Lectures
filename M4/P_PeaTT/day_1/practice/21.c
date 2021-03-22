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
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(j <= i){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		for(int j=2;j<=n;++j){
			if(n-j >= i){
				printf("-");
			}
			else{
				printf("+");
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
