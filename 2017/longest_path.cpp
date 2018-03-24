#include <bits/stdc++.h>
using namespace std;
//para compilar use g++ -std=c++11 longest_path.cpp
//http://www.spoj.com/problems/PT07Z/
//BFS

vector <int> adj[10005];
queue <int> bfs;  	
int vis[10005],m,ans;

int longest(int u){
	bfs.push(u);
	while(!bfs.empty()){
		int v = bfs.front();
		for(int w : adj[v]){  //for(i=0;i<adj[u].size();i++) w=adj[u][i]
			if(!vis[w]) vis[w] = vis[v]+1, bfs.push(w);
		}  
		ans = bfs.back(); //ultimo elemento=mais longe
		bfs.pop();  //tira o primeiro elemento da fila
	}	
	return ans;
}

int main(){
	scanf("%d",&m);
	for(int i=1;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int u;
	u=longest(1);
	memset(vis,0,sizeof(vis));
	int v;
	v=longest(u);
	printf("%d\n",vis[v]);
}


