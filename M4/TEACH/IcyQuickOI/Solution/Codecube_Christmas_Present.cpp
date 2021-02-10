#include<bits/stdc++.h>
using namespace std;

int a[110],b[110];

const int INF = 1e9;

int main (){
	int n,m;
	scanf("%d %d",&n,&m);
	a[0] = INF;
	b[0] = INF;
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;++i){
		scanf("%d",&b[i]);
	}
	sort(a,a+n+1);
	sort(b,b+m+1);
	printf("%d",min({a[0]+a[1],a[0]+b[0]+100,b[0]+b[1]}));
	return 0;
}
