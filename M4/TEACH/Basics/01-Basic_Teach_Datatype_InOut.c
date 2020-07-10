/*
  TASK   : Basic_Teach_Datatype_InOut
  AUTHOR : IceBorworntat
  SCHOOL : RYW
  LANG   : C
*/
#include <stdio.h>

int main (){
	
	//data type
	/*
		int -> for integer(2*1e9)
			use %d
		double -> for real num
			use %lf
		char -> for Charactor
			use %c
		bool -> for True/False
			must use with condition
		long long -> for bigger integer
			use %lld
	*/
	/*
	scanf(); -> input data
	printf(); -> output data
	\n use for change line to next line
	when you use scanf(); you should use varible with "&" but there are acception (Gonna Use In Future)
	*/
	//example :
	int a;
	double b;
	char c;
	bool d;
	long long e;
	printf("Hello World!~\n");
	scanf("%d",&a);
	printf("\n%d",a);
 	return 0;
}
