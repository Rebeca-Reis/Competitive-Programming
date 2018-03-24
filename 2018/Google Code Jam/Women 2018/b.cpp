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

ll caso,t,l,n,e,ans;

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		ans=0;
		cin >> l;
		cin >> n >> e;
		ans=n;
		for(int i=1;i<l;i++){
			cin >> n >> e;
			ans=max((ll)0,ans-n*e)+n;
		}
		ans=max(ans,e+1);
		cout << "Case #" << caso << ": " << ans << endl;
	}

}



