#include <bits/stdc++.h>
//
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
const int N=1e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t,f,s,a,b,ans, v[N];

int main(){
	cin >> t;
	int caso=0;
	while(t--){
		set<pair<int,int> > m; 
		caso++;
		ans=0;
		cin >> f >> s;
		for(int i=0;i<f;i++){
			cin >> a >> b;
			m.insert(mp(a,b));
			m.insert(mp(b,a));
		}
		for(auto u : m){
			//db(u.st _ u.nd);
			v[u.st]++;
			ans=max(ans,v[u.st]);
		}
		cout << "Case #" << caso << ": " << ans << endl;
		memset(v,0,sizeof(v));
	}	
}