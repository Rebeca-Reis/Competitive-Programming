#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define st first
#define nd second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,x,ans,cont;
map<tuple<int,int,int,int,int>,int> m;
vi v;

int main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	while(cin >> n)
	{
		m.clear();
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			v.clear();
			for(int j=0;j<5;j++){
				cin >> x;
				v.pb(x);
			}
			sort(v.begin(),v.end());
			tuple<int,int,int,int,int> u= make_tuple(v[0],v[1],v[2],v[3],v[4]);
			m[u]++;	
		}
		ans=0;
		for(auto k : m){
			ans=max(ans,k.nd);
		}
		cont=0;
		for(auto k : m){
			if(k.nd==ans) cont++;
		}
		cout << ans*cont << '\n';
	}	
}

