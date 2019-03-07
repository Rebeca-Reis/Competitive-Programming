#include <bits/stdc++.h>
//
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

ll n, a, x, sum, mid;
vector<ll> v;

bool can(ll n, ll p, ll a){ //consigo convencendo p pessoas?
	sum=0;
	for(int i=0;i<n;i++){
		if(v[i]==0) sum++;
		else if(v[i]<=sum) sum++;
		else if(v[i]>sum and p) sum++, p--;
	}
	if(sum>=a) return true;
	return false;
}

ll binary_search(ll l, ll r, ll a, ll n){
	mid=(l+r)/2;
	if(l==r) return l;
	if(can(n,mid,a)) return binary_search(l,mid,a,n);
	return binary_search(mid+1,r,a,n);
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> a;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	ll ans= binary_search(0,n,a,n);
	cout << ans << endl;

}
//busca binaria no numero de pessoas q precisam ser convencidas. funçao can verifica se é possivel atingir o limite 
//esperado de reviews com aquele numero de pessoas sendo convencidas. vai percorrendo o vetor, quando o numero for menor
// nao precisa convencer e incrementa as reviews. quando for maior, convence aquela pessoa logo. (é bom q convença logo
// as pessoas mais do inicio do vetor).