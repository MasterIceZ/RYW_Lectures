/*
    TASK  : Lab_1
    AUTHOR: Hydrolyzed~
    GITHUB: MasterIceZ
    LANG  : C
    SCHOOL: RYW
*/

#include<stdio.h>

void quiz1(){
	int p = 175;
	printf("%05d\n", p);
}

void quiz2(){
	int p = 175;
	printf("%+d", p);
	printf("\n");
}

void quiz3(){
	double pi = 3.14159;
	printf("%06.2lf", pi);
	printf("\n");
}

/*
	QUIZ 4 :
	Comnent => 2
	1. //
	2/ / * * /
*/

/*
	QUIZ 5 :
	%d -> %s
*/

/*
	QUIZ 6 :

	Example ==>
	auto, int, double, float, char,
	while, for, do, switch, break,
	if, static, else, case, long,
	typedef, void, const, signed, 
	unsigned, while, return
*/

/*
	QUIZ 7 :
	==
	!=
	>
	<
	>=
	<=
*/

int main(){
	quiz1();
	quiz2();
	quiz3();
	printf("\n");
	return 0;
}
