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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vector<ll> v, ans, o;
vector<int> u[N];
int n, m, q, l, r, d; 
ll x;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> m >> q;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
		ans.pb(0);
	}
	ans.pb(0);
	for(int i=0;i<m;i++){
		cin >> l >> r >> d;
		u[i].pb(l);
		u[i].pb(r);
		u[i].pb(d);
		o.pb(0);
	}
	o.pb(0);
	for(int i=0;i<q;i++){
		cin >> l >> r;
		o[l-1]++;
		o[r]--;
	}
	if(o.size()>1) for(int i=1;i<o.size();i++) o[i]+=o[i-1];
	for(int i=0;i<m;i++){
		ll val=u[i][2]*o[i];
		ans[u[i][0]-1]+=val;
		ans[u[i][1]]-=val;
	}
	if(n>1) for(int i=1;i<n;i++) ans[i]+=ans[i-1];
	for(int i=0;i<n;i++) v[i]+=ans[i];
	for(int i=0;i<n;i++) cout << v[i] << " ";
	cout << endl;

}
