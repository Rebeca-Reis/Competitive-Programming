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
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n,k,x,ans,pos;
vector<ll> v;

int main(){
	cin >> n >> k;
	ans=1e9;
	v.pb(0);
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	for(int i=1;i<=n;i++) v[i]+=v[i-1];
	for(int j=k;j<=n;j++){
		if(v[j]-v[j-k] < ans) ans= v[j]-v[j-k], pos=j-k+1;
	}
	cout << pos << endl;
}