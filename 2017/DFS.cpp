/*
DFS
vector <int> adj[N]  se fosse lista de adjacencia
int vis[N];

void dfs(int u){
	if(vis[u]) return;
	vis[u]=1;
	for(int i=0;i<adj[u].size;i++) dfs(adj[u][i]);
}


para ler as conexoes do grafo:
int main(){
	for(int i=0;i<m;i++){
	int a,b;
	scanf("%d%d",&a&b);
	adj[a].push_back(b);
	adj[b].push_back(a);
	//vamos contar as conexoes que existem
	for(int i=0;i<n;i++){
		if(!vis[i]){
			ans++;
			dfs(i);
			}
		}
	}
}

*/