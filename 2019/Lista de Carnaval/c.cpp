#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/1118/D2
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vector<ll> v;
ll n,x,m,mid,zero;

bool compare(ll x, ll y){
	return x>y;
}

bool can(ll d, ll m){
	ll ans=0, i=0, dec=0;
	while(i<n){
		for(int j=0;j<d;j++){ 	//repete d vezes
			ans+=max(v[i]-dec,zero);
			i++;
			if(i>=n) break;
		}
		dec++;
	}
	if(ans>=m) return true;
	return false;
}

int binary_search(ll l, ll r, ll m){
	mid=(l+r)/2;
	if(l==r) return l;
	if(can(mid,m)) return binary_search(l,mid,m);
	return binary_search(mid+1,r,m);
}

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end(),compare);
	if(!can(n,m)) return cout << -1 << endl, 0;   //nao consegue fazer em n dias, entao eh impossivel
	cout << binary_search(1,n,m) << endl;
}

//busca binaria no numero de dias, com a funçao can vendo se é possivel com aquele numero de dias. Verifica isso com guloso:
//pega o maior numero para o primeiro dia e o segundo maior para o segundo dia. O 3o maior para o segundo copo do 1o dia
//o 4o maior para o segundo copo do segundo dia.. e assim por diante