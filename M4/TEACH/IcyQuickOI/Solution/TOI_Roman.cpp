#include<bits/stdc++.h>
using namespace std;

int ii,v,x,l,c;

int main (){
	int n;
	scanf("%d",&n);

	for(int j=1;j<=n;++j){
		int i = j;
		for(;i>=100;i-=100)
			c++;
		for(;i>=90;i-=90)
			c++,x++;
		for(;i>=50;i-=50)
			l++;
		for(;i>=40;i-=40)
			l++,x++;
		for(;i>=10;i-=10)
			x++;
		for(;i>=9;i-=9)
			x++,ii++;
		for(;i>=5;i-=5)
			v++;
		for(;i>=4;i-=4)
			ii++,v++;
		for(;i>=1;i--)
			ii++;
	}
	printf("%d %d %d %d %d",ii,v,x,l,c);
	return 0;
}
