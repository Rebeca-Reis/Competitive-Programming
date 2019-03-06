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

int n,x;
vi v;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-2;i++){
		if(v[i]+v[i+1]>v[i+2]){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" <<  endl;
}

