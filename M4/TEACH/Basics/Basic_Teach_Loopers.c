/*
  TASK   : Basic_Teach_Datatype_Loopers
  AUTHOR : IceBorworntat
  SCHOOL : RYW
  LANG   : C
*/
#include <stdio.h>
#define print printf

int main (){
	/*
	     For loop
	     Syntax :
	     	for(runner;condition;set runner)
		{

		}
		runner 	   => varible that use to run the loop
		condition  => if the condition is true the loop will do but when it in't true the loop will stop
		set runner => in the end of the process in loop the runner will be set in other 
	 	example below
	 */
	/*
	     While loop
	     Syntax :
	    	while(condition)
		{

		}
		in this loop you should set the counters in loop
		example below	
	*/
	// For Loop
	int i;
	print("\t For Loop\n");
	for(i=0;i<5;i++){
		print("\t This is For Loop\n");
	}

	i = 0;
	print("\n");
	print("\t While Loop\n");
	while(i<5){
		print("\t This is While Loop\n");
		i++;
	}
 	return 0;
}

