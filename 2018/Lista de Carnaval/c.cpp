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

int n,x,ans;
vi v;

int main(){
	while(cin >> n){
		for(int i=0;i<n;i++){
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n/2;i++){
			ans+= v[n-i-1] - v[i];
		}
		cout << ans << endl;
		v.clear();
		ans=0;
	}
}