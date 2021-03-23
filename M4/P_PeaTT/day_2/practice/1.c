/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int a[1111];

int main(){
	int n;	
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d", &a[i]);
	}
	for(int i=2;i>=0;--i){
		printf("%d\n", a[i]);
	}
	printf("\n");
	return 0;
}
