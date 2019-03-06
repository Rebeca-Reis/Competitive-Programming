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

int t,n,caso,x,ans;
vi p,imp,v;

int main(){
	cin >> t;
	while(t--){
		caso++;
		p.clear();
		v.clear();
		imp.clear();
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			(i%2) ? imp.pb(x) : p.pb(x);
		}
		sort(p.begin(),p.end());
		sort(imp.begin(),imp.end());
		int k=0,l=0;
		for(int i=0;i<n;i++){
			if(i%2==0) v.pb(p[k]),k++;
			else v.pb(imp[l]),l++;
		}
		ans=n;
		for(int i=0;i<n-1;i++){
			if(v[i]>v[i+1]){
				ans=i;
				break;
			}
		}
		if(ans==n) cout << "Case #" << caso << ": OK\n";
		else cout << "Case #" << caso << ": " << ans << endl;
	}
}


