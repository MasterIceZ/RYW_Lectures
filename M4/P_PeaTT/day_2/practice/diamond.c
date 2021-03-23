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
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		for(int j=0;j<n-i;++j){
			printf("-");
		}
		if(i == 0){
			printf("+");
		}
		else{
			printf("+");
			for(int j=1;j<i*2;++j){
				printf("*");
			}
			printf("+");
		}
		for(int j=0;j<n-i;++j){
			printf("-");
		}
		printf("\n");
	}
	for(int i=0;i<2*n+1;++i){
		if(i==0 || i == 2*n){
			printf("+");
		}
		else{
			printf("*");
		}
	}
	printf("\n");
	for(int i=1;i<=n;++i){
		for(int j=1;j<i+1;++j){
			printf("-");
		}
		if(i != n){
			printf("+");
			for(int j=1;j<2*n-2*i;++j){
				printf("*");
			}
			printf("+");
		}
		else{
			printf("+");
		
		}
		for(int j=1;j<i+1;++j){
			printf("-");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
