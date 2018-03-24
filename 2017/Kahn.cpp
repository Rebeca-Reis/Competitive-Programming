//Algoritmo de Kahn
//ordenação topológica

int n,m;
vector <int> adj[N],L;
int arestas[N];
queue <int>q;

int main(){
	aj[a].push_back(b);
	arestas[b]++;
	for(int i=0;i<n;i++) if(!arestas[i]) q.push(i);
	while(!q.empty){
		L.push_back(q.front());
		for(int v: adj[q.top]){
			arestas[v]--;
			if(arestas[v]) q.push(v);
		}
		q.pop();
	}
}