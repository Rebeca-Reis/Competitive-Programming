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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,t;
vi a,b;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	int x;
	cin >> x;
	a.pb(x);
	for(int i=1;i<n;i++){
		cin >> x;
		a.pb(x+a[i-1]);
	}
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> x;
		vi :: iterator it;
		it=lower_bound(a.begin(),a.end(),x);
		cout << it +1 - a.begin() << endl;
	}
}

