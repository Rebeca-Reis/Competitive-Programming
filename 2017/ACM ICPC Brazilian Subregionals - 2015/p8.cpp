#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1938

#define mp make_pair
#define pb push_back

int n,x,y,l,r,ans,altura;
vector< pair<int,int> > pto;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		pto.pb(mp(y,x));
	}
	sort(pto.begin(),pto.end());
	for(int i=pto.size()-1;i>0;i--){
		y=pto[i].first,x=pto[i].second;
		l=-1e8-5;
		r=1e8+5;
		altura=1e8+7;
		for(int j=i-1;j>=0;j--){
			if(pto[j].first==y) continue;
			if(pto[j].second>x and pto[j].second < r){
				r=pto[j].second;
				if(pto[j].first!=altura) ans++;
				altura=pto[j].first;
			}
			else if(pto[j].second <x and pto[j].second>l) l=pto[j].second,ans++;
		}
	}
	cout << ans << endl;
}
