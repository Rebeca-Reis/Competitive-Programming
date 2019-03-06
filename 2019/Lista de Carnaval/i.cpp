#include <bits/stdc++.h>
//
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

ll t,x,mid,d;

bool can(ll n, ll ang){
	d=ang*n;
	if(d%180!=0) return true;
	d/=180;
	if(d <= n-2) return true;
	return false;
}

ll binary_search(ll l, ll r, ll ang){
	mid=(l+r)/2;
	if(l==r) return l;
	if(can(mid,ang)) return binary_search(l,mid,ang);
	return binary_search(mid+1,r,ang);
}

int main(){
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> x;
		ll ans= binary_search((ll)3,(ll)998244353,x);
		if(!can(ans,x)) cout << -1 << endl;   //impossivel
		else cout << ans << endl;
	}
}