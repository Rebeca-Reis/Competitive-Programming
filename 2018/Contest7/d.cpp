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
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n,l,p,u,v,dist[N];
vector<ll> adj[N],adjw[N];
priority_queue<pair<ll,ll>> pq;

void dijkstra(ll u){
	memset(dist,63,sizeof(dist));
	pq.push(mp(0,u));
	dist[u]=0;
	while(!pq.empty()){
		ll v=pq.top().nd;
		ll d= - pq.top().st;
		pq.pop();
		if(d>dist[v]) continue;
		for(int i=0;i<adj[v].size();i++){
			ll x=adj[v][i];
			ll w=adjw[v][i];
			if(w+dist[v]<dist[x]){
				dist[x]=dist[v]+w;
				pq.push(mp(-dist[x],x));
			}
		}
	}
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> l;
	for(int i=0;i<l;i++){
		cin >> u >> v >> p;
		adj[u].pb(v);
		adj[v].pb(u);
		adjw[u].pb(2*p);
		adjw[v].pb(2*p);
	}
	for(int i=1;i<=n;i++){
		cin >> p;
		adj[n+1].pb(i);
		adj[i].pb(n+1);
		adjw[n+1].pb(p);
		adjw[i].pb(p);
	}
	dijkstra(n+1);
	for(int i=1;i<=n;i++) cout << dist[i] << " ";
	cout << endl;
}

