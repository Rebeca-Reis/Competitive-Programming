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

ll n,q,l,r;
ll a[N], v[N];

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> q;
	v[0]=0;
	for(int i=1;i<=n;i++) cin >> v[i];
	for(int i=0;i<q;i++){
		cin >> l >> r;
		a[l]++;
		a[r+1]--;
	}
	for(int i=2;i<=n;i++) a[i]+=a[i-1];
	sort(a+1,a+1+n);
	sort(v+1,v+1+n);
	ll ans=0;
	for(int i=1;i<=n;i++) ans+=a[i]*v[i];
	cout << ans << '\n';
}

