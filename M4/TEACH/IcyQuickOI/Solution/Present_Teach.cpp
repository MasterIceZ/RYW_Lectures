#include<bits/stdc++.h>
using namespace std;

int a[110],b[110];

int INF = 1e9;

int main (){

	int n,m;
	scanf("%d %d",&n,&m);
	/*
	a[n] = INF;
	b[m] = INF;
	
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<m;++i){
		scanf("%d",&b[i]);
	}
	*/

	a[0] = INF;
	b[0] = INF;

	//sort(a,a+n); // 0 -> n-1 => 0 -> n
	sort(a,a+n+1);
	sort(b,b+m);

	printf("%d",min({a[0]+a[1],b[0]+b[1],a[0]+b[0]+100}));

	return 0;
}
