/*
    TASK  : 20.c
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
	for(int j=n;j>i;--j){
			printf("-");
		}
		for(int j=0;j<2*i+1;++j){
			printf("*");
		}
		for(int j=n;j>i;--j){
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
