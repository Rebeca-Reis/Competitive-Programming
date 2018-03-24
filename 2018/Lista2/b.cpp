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

int t,n,x,y;
vector<ii> v;

bool comp(ii i, ii j){
	if(i.st==j.st) return i.nd > j.nd;
	else return i.st < j.st;
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			v.pb(mp(x,y));
		}
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<n;i++) cout << v[i].st << " " <<  v[i].nd << '\n';
		v.clear();
	}
}

