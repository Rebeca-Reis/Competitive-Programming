#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/276/C
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

vector<ll> v,a;
ll n,q,x,l,r;
ll sum;

int main(){
	cin >> n >> q;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
		a.pb(0);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<q;i++){
		cin >> l >> r;
		a[l-1]++;
		if(r+1<=n) a[r]--;
	}
	if(n>1) for(int i=1;i<n;i++) a[i]+=a[i-1]; //prefix sum
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++) sum+=v[i]*a[i];
	cout << sum << endl;	
}