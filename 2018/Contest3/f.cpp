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

int t,n,x,ans;
set<int>s;
vi v;

int main(){
	cin.tie(0);
	//ios_base::sync_with_stdio(0);
	cin >> t;
	while(t--){
		s.clear();
		v.clear();
		cin >> n;
		int aux=0;
		int ok=1;
		for(int i=0;i<n;i++){
			cin >> x;
			s.insert(x);
			v.pb(x);
			if(x<aux) ok=0;
			aux=x;			
		}
		if(ok==1){
			cout << 0 << '\n';
			continue;
		}
		else{
			ans=0;
			for(int i=0;i<n;i++){
				x= distance(s.begin(),s.lower_bound(v[i]));
				if(x<i) ans+=i-x; 
				if(x==i and i!=0){
					for(int j=0;j<i;j++){
						if(v[j]>v[i]) ans++;
					}
				}
			}
		}
		cout << ans << '\n';
	}
}

