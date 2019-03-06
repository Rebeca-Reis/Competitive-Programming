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

map<string, int> id;
int n,l,q,x,root[N],size[N];
string s,r;

int find(int u){
	if(root[u]==u) return u;
	else return root[u]=find(root[u]);
}

bool uniteS(int u, int v){
	u=find(u);
	v=find(v);
	if(u!=find(v+1)){ //nao sao antonimos
		root[u+1]=v+1;
		size[v+1]+=size[u+1];
		if(size[u]>size[v]) swap(u,v);
		root[u]=v;
		size[v]+=size[u];
		return true;
	}
	return false;
}

bool uniteA(int u, int v){
	db("a" _ u _ v);
	u=find(u);
	v=find(v);
	if(u==v) return false; //sao sinonimos
	root[v]=u+1;
	root[u]=v+1;
	return true;
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> l >> q;
	for(int i=1;i<N;i++) root[i]=i;
	memset(size,1,sizeof(size));
	for(int i=1;i<=n;i++){
		cin >> s;
		id[s]=2*i;
	}
	for(int i=0;i<l;i++){
		cin >> x >> s >> r;
		if(x==1) cout << (uniteS(id[s],id[r]) ? "YES" : "NO") << endl;
		else cout << (uniteA(id[s],id[r]) ? "YES" : "NO" ) << endl;
	}
	for(int i=0;i<q;i++){
		cin >> s >> r;
		if(find(id[s])==find(id[r])) cout << 1 << endl;
		else if(find(id[s])==find(id[r]+1)) cout << 2 << endl;
		else cout << 3 << endl;
	}
}

