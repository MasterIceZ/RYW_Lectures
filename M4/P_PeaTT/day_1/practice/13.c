/*
    TASK  :
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum = a+b+c;
	if(sum >= 80){
		printf("A");
	}
	else if(sum >= 75){
		printf("B+");
	}
	else if(sum >= 70){
		printf("B");
	}
	else if(sum >= 65){
		printf("C+");
	}
	else if(sum >= 60){
		printf("C");
	}
	else if(sum >= 55){
		printf("D+");
	}
	else if(sum >= 50){
		printf("D");
	}
	else{
		printf("\n");
	}
	printf("\n");
	return 0;
}
