#include<bits/stdc++.h>
using namespace std;

int main (){
	int q = 20;
	while(q--){
		int n,m,ans;
		scanf("%d %d",&m,&n);
		if(m > 4*n or m < 2*n){
			ans = 0;
		}	
		else{
			ans = 2*n - m/2 + 1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
