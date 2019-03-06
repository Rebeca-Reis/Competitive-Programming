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

vi v;
int ans,sum,t,n,x;
map<int,int> m;

int main(){
	cin >> t;
	while(t--){
		ans=0;
		m.clear();
		v.clear();
		v.pb(0);
		m[0]++;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			v.pb(x);
		}
		if(v.size()==0) continue;
		for(int i=1;i<=n;i++) v[i]+=v[i-1];
		for(int i=1;i<=n;i++){
			int u=v[i]-47;
			if(m.count(u)) ans+=m[u];
			m[v[i]]++;
		}
		cout << ans << endl;
	}
}
