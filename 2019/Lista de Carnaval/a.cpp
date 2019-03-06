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

int n,x,q,low;
vi v;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	if(n>1) for(int i=1;i<n;i++) v[i]=v[i]+v[i-1];
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> x;
		low=lower_bound(v.begin(),v.end(),x) - v.begin();
		cout << low+1 << endl;
	}
}