#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/706/B
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

int n,q,a;
vi x;

int main(){
	cin >> n;
	for(int i=0;i<n;i++) cin >> a, x.pb(a);
	cin >> q;
	sort(x.begin(),x.end());
	while(q--){
		int t;
		cin >> t;
		vi::iterator upper;
		upper=upper_bound(x.begin(),x.end(),t);
		cout << upper-x.begin() << endl;
	}
}