#include<bits/stdc++.h>
using namespace std;
int v[10010];	
int main(){
	int n,k,sum=0;
	int ptr = 0;
	cin >> n >> k;
	int cnt = 0;
	bool mark = false;
	for(int i=0,x;i<n;++i){
		cin >> x;
		if(x<0){
			sum -= x-1;
			mark = true;
		}
		else if(!mark){
			v[ptr] = sum;
			sum = 0;
			mark = false;
			cnt++;
			ptr++;
		}
	}
	v[ptr] = sum;
	sort(v,v+ptr);
	int ans = 0;
	int k=0;
	for(int i=cnt ; i<=k;++i){
		ans += v[k] ;
		k++;
	}
	cout << ans;
	return 0;
}
