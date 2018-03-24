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

int n, x;
vi v,r;
set<int> pos;
map<int,int> m;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
		r.pb(x);
	}
	sort(r.begin(),r.end());
	for(int i=0;i<n;i++){
		int u;
		for(u=0;u<n;u++){
			if(v[u]==r[i]){
				if(pos.count(u+1)==0) break;
				else continue;
			}
		}
		u++;
		if(pos.count(u)==0) pos.insert(u), m[i+1]=u;
	}
	for(int i=0;i<n/2;i++) cout << m[i+1] << " " << m[n-i] << endl;
}

