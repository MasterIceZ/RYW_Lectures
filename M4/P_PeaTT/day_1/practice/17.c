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
	if(n % 2 == 1){
		n--;
	}
	for(int i=n;i>=2;i-=2){
		printf("%d\n",i);
	}
	printf("\n");
	return 0;
}
