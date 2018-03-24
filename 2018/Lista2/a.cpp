#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define nd second
#define st first

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vector<ii> m;
int a,b,n;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		m.pb(mp(a,b));
	}
	sort(m.begin(),m.end());
	if(n==1) return cout << "Poor Alex" << endl, 0;
	for(int i=0;i<n-1;i++){
		if(m[i].nd > m[i+1].nd) return cout << "Happy Alex" << endl, 0;
	}
	cout << "Poor Alex" << endl;
}

