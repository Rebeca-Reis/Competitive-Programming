#include <bits/stdc++.h>
//
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=5e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int vis[N],vi,n,m,a,b,ans,k;
char c1,c2;
vector<int> adj[N]; 
bool ciclo;

void dfs(int u){
	vis[u]=vi;
	//printf("entrando %d vis= %d\n", u, vis[u]);
	for(int i=0;i<adj[u].size();i++){
		if(vis[adj[u][i]]==vi){
			//cout << "tem ciclo" << endl;
			ciclo=true;
			return;
		}
		if(vis[adj[u][i]]==0) dfs(adj[u][i]);			
	}
	vis[u]-= k*13;
	//printf("saindo %d vis= %d\n", u, vis[u]);
	return;	
}

int main(){
	cin >> n >> m;
	ciclo=false;
	for(int i=0;i<m;i++){
		cin >> c1 >> a >> c2 >> b;
		if(c1=='-' and c2=='+'){
			adj[b].pb(a);
			adj[a+n].pb(b+n);
			if(a==b) return cout << "NIE" << endl, 0;
		}
		else if(c1=='+' and c2=='-'){
			adj[a].pb(b);
			adj[b+n].pb(a+n);
			if(a==b) return cout << "NIE" << endl, 0;
		}
		else if(c1=='+' and c2=='+'){
			adj[a].pb(b+n);
			if(a!=b) adj[b].pb(a+n);
		}
		else if(c1=='-' and c2=='-'){
			adj[a+n].pb(b);
			if(a!=b) adj[b+n].pb(a);

		}
	}
	vi=13;
	k=1;
	for(int i=1;i<=2*n;i++){
		if(vis[i]==0) {
			vi=13*(k+1);
			dfs(i);
			k++;
			if(ciclo) ans++;
		}
	}
	if(ans==0) cout << "TAK" << endl;
	else cout << "NIE" << endl;
}