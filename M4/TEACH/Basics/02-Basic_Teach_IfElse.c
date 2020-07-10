/*
  TASK   : Basic_Teach_IfElse
  AUTHOR : IceBorworntat
  SCHOOL : RYW
  LANG   : C
*/
#include "stdinc.h"
#define print printf
int main (){
	/*
	How to use If / Else
	If Syntax :
		if(condition){
		
		}
	Else If Syntax :
		else if(condition){
		
		}
	Else Syntax :
		else{
		
		}
	To use else or else if you should have the first if 
	*/	
	/*
	Conditions Examples
	 	a==b means is a equal to b
	 	a!=b means is a not equal to b
	*/
	int a;
	scanf("%d",&a);
	if(a==2)
		print("Hello\n");
	else
		print("Hi\n");
 	return 0;
}
