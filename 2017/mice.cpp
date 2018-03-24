#include <bits/stdc++.h>
//http://www.spoj.com/problems/MICEMAZE/
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e3+5;
const int MOD=1e9+7
const int INF=0x3f3f3f3f

priority_queue < pair <int,int> > dij;
vi adj[N];
int dist[N],n,e,t,m,wt[N][N],ans;

int dijkstra(int p,int e){
	memset(dist,INF,sizeof(dist));
	dist[p]=0;
	dij.push(mp(dist[p],p));
	while(!dij.empty()){
		int u=dij.top().second;
		int w= -dij.top().first;
		dij.pop();
		for(int v : adj[u]){
			if(dist[v]> w + wt[u][v]) dist[v]=w + wt[u][v], dij.push(mp(-dist[v],v));
		}
	}
	return dist[e];	
}

int main(){
	cin >> n >> e >> t >> m;
	for(int i=0;i<m;i++){
		int a,b,w;
		cin >> a >> b >> w;
		adj[a].pb(b);
		wt[a][b]=w;
	}
	for(int i=1;i<=n;i++){
		if(dijkstra(i,e)<=t) ans++;
	}
	cout << ans << endl;
}

