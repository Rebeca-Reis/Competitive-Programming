#include <bits/stdc++.h>
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2354
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

//MAXIMUM FLOW
int n,v[N][2],ans,maxf;
int m[105][105];
int dist[105],pai[105],cap[105]; 

int bfs(int s){ //s é a source
	memset(cap,0,sizeof(cap));
	memset(dist,63,sizeof(dist)); //começa como inf
	memset(par,-1,sizeof(par));
	queue<int> q;
	q.push(0);
	dist[0]=0;
	cap[0]=0;
	while(q.size()){
		int u= q.front();
		q.pop();
		for(int v=1;v<=2n+1;v++) if(m[u][v] and dist[v]>dist[u]+1){
			cap[v]=min(cap[u],m[u][v]);
			dist[v]=dist[u]+1;
			q.push(v);
			pai[v]=u;
		}
	return cap[2n+1];
	}
}

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> v[i][0] >> v[i][1];
	}
	for(int i=1;i<=n;i++){
		memset(m,0,sizeof(m));
		int k=0;
		for(int j=1;j<=n;j++) if(v[j][0]==i or v[j][1]==i) k++;
		for(int j=1;j<=n;j++) if(j!=i and v[j][0]!=i and v[j][1]!=i) m[0][j]=1; //aresta de 0 pra j vale 1
		for(int j=1;j<=n;j++) if(j!=i){
			m[n+j][2n+1]= k-1;
			if(v[i][0]==j or v[i][1]==j) m[n+j][2n+1]--; //se for uma das pessoas que o lobisomem pode votar, ela só pode receber k-2 votos no maximo
		}
	}
	while(bfs()){
		maxf=0;
		int u=pai[2n+1],v=2n+1,f=cap[2n+1];
		while(v){
			m[u][v]-=f;
			m[v][u]+=f;
			v=u;
			u=pai[u];
		}
		maxf=f;
		if(maxf<n-k-1) ans++;
	}
}
