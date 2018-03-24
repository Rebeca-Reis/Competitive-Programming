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

int caso,n,x,ans,t;
vi v1,v2;

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		ans=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			v1.pb(x);
		}
		for(int i=0;i<n;i++){
			v2.pb(i/2);
		}
		sort(v1.begin(),v1.end());
		for(int i=0;i<n;i++) ans+=(v2[i]-v1[i])*(v2[i]-v1[i]);
		cout << "Case #" << caso << ": " << ans << endl;
		v1.clear();
		v2.clear();	
	}

}

