#include <bits/stdc++.h>
//https://www.codepit.io/#/problems/58e804ff69194b0033572ffb/view?index=9
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vi adj[N];
int n,k,ini[N],x,vis[N];

void dfs(int u){
	if(vis[u]) return;
	vis[u]=1;
	for(int v : adj[u]){
		if(v!=u) dfs(v);
	}
}

int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> ini[i];
	cin >> k;
	int u;
	for(int i=0;i<k;i++){
		for(int j=1;j<=n;j++){
			cin >> u;
			adj[j].pb(u);
		}
	}
	cin >> x;
	for(int i=1;i<=n;i++) if(ini[i]==x) u=i;
	dfs(u);
	if(vis[1]) cout << "YES" << endl;
	else cout << "NO" << endl;
}
