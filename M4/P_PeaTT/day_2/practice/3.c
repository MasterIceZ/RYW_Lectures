/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>
#include<limits.h>


int main(){
	int n, x;
	scanf("%d", &n);	
	int nax = -INT_MAX, nin = INT_MAX;
	for(int i=0;i<n;++i){
		scanf("%d", &x);
		if(nax < x){
			nax = x;
		}
		if(nin > x){
			nin = x;
		}
	}
	printf("%d\n%d", nin,nax);
	printf("\n");
	return 0;
}
