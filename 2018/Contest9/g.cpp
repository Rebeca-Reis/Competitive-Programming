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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,m,pos,b,x,op;
int st[4*N], v[N];

void build(int p, int l, int r,int x){
	if(l==r){
		st[p]=v[l];
		return;
	}
	int mid=(l+r)/2;
	build(2*p,l,mid,1-x);
	build(2*p+1,mid+1,r,1-x);
	if(x==0) st[p]=st[2*p] | st[2*p+1];
	else st[p]=st[2*p] ^ st[2*p+1];
}

void update(int p, int l, int r, int pos, int value, int x){
	if(l==r){
		st[p]=value;
		return;
	}
	if(pos<l or pos>r) return;
	int mid=(l+r)/2;
	update(2*p,l,mid,pos,value,1-x);
	update(2*p+1,mid+1,r,pos,value,1-x);
	if(x==0) st[p]=st[2*p]|st[2*p+1];
	else st[p]=st[2*p]^st[2*p+1];
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for(int i=1;i<= 1<<n; i++){
		cin >> x;
		v[i]=x;
	}
	if(n%2==0) op=0, build(1,1,1<<n,0);
	else op=1, build(1,1,1<<n,1);
	for(int i=0;i<m;i++){
		cin >> pos >> b;
		update(1,1,1<<n,pos,b,op);
		cout << st[1] << endl;
	}
}

