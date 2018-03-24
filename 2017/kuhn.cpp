#include <bits/stdc++.h>
using namespace std;

vector <int,int> adj[N];
int vis[N],b[N],ans,x;

bool match(int u, int x){
	if(vis[u]==x) return false;
	vis[u]=x;
	for(int v:adj[u]){
		if (!b[v] or match(b[v],x)) return b[v]=u;
	}
	return false;
}

int main(){
	//random_shuffle(...) para embaralhar a ordem dos vetores e passar no tempo, caso caia num caso em q é a pior complexidade
	for(int i=1;i<=n;i++) ++x,ans+=match(i,x);
}

//Algoritmo de kuhn para contar o maior numero possivel de ligações num grafo
//pode encontrar no site russo: e-maxx.ru e traduzir com yandex