#include <bits/stdc++.h>
//
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int caso,t,x,n,ans,ok,m,up,cont;
vi v;
set<int> s;
set<int>::reverse_iterator rit; 

int main(){
	cin >> t;
	caso=0;
	while(t--){
		ans=0;
		ok=0;
		caso++;
		cin >> n;
		for(int i=0;i<n+1;i++){
			cin >> x;
			v.pb(x);
		}
		m=v[0];
		up=0;
		for(int i=1;i<v.size();i++){
			if(v[i]==m) {
				cont++;
				continue;}
			if(v[i]>m){
				m=v[i];
				if(up!=1) up++;
			}
			else if(v[i]<m){
				m=v[i];
			 	if(up!=-1) up--;
			}
			if(up==0 and i!=v.size()-1){
				ans++;
				up=0;
				m=v[i];
				cont=0;
			}
		}
		if(up!=0 or cont!=0) ans--;
		cout << "Case #" << caso << ": " << ans << endl;
		v.clear();
	}
}