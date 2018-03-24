#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1932

int n,c,p,maxi,mini,ans,v[200005];

int main(){
	maxi=0;
	mini=1005;
	cin >> n >> c;
	cin >> v[0];
	mini=v[0];
	for(int i=1;i<n;i++) cin >> v[i];
	for(int i=1;i<n;i++){
		p=v[i];
		if(p<mini){
			if(maxi and maxi-mini-c >0) ans+= maxi-mini-c;
			mini=p;
			maxi=0;
		}
		else{
			if(maxi<p) maxi=p;
			if(v[i-1]-v[i]>c) ans+=maxi-mini-c, maxi=0, mini=v[i];
		}
	}
	if(maxi and maxi-mini-c >0) ans+= maxi-mini-c;
	cout << ans << endl;
}