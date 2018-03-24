#include <bits/stdc++.h>
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2176
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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ii tree[4*N];
int v[N], n, q, a, b;

void build(int p, int l, int r) {
  if (l == r) { tree[p] = mp(v[l],1); return; }
  build(2*p, l, (l+r)/2);
  build(2*p+1, (l+r)/2+1, r);
  if(tree[2*p].st == tree[2*p+1].st) tree[p]=mp(tree[2*p].st,tree[2*p].nd + tree[2*p+1].nd);
  else if(tree[2*p].st != tree[2*p+1].st and tree[2*p].nd == tree[2*p+1].nd) tree[p]=mp(tree[2*p+1].st,tree[2*p].nd);
  else{
  	if(tree[2*p].nd > tree[2*p+1].nd) tree[p]=mp(tree[2*p].st,tree[2*p].nd);
  	else tree[p]= mp(tree[2*p+1].st,tree[2*p+1].nd);
  }
}

ii query(int p, int l, int r, int i, int j) { // l e r - o intervalo atual
  if (r < i or l > j) return mp(-1e5-1,-1); 		    	//	i e j - intervalo da query
  if (l >= i and r <= j) return mp(tree[p].st,tree[p].nd);
  ii u= query(2*p, l, (l+r)/2, i, j);
  ii v= query(2*p+1, (l+r)/2+1, r, i, j);
  if(u.st == v.st) return mp(u.st,u.nd + v.nd);
  else if(u.st != v.st and u.nd == v.nd) return mp(v.st,u.nd);
  else{
  	if(u.nd > v.nd) return mp(u.st,u.nd);
  	else return mp(v.st,v.nd);
 }
}

int main(){
	while(cin >> n){
		if(n==0) return 0;
		cin >> q;
		for(int i=0;i<n;i++) cin >> v[i];
		build(1,0,n-1);
		while(q--){
			cin >> a >> b;
			ii x = query(1,0,n-1,a-1,b-1);
			cout << x.nd << endl;
		} 
		memset(v,0,sizeof(v));
		memset(tree,0,sizeof(tree));
	}
}