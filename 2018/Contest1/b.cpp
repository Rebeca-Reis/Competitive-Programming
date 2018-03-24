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

ll n,ans;

ll f(ll n){
	if(n/10==0) return n;
	else return n%10 + f((n-n%10)/10);
}

int main(){
	while(cin >> n){
		if(n==0) return 0;
		ans=f(n);
		while(ans/10 != 0){
			ans=f(ans);
		}
		cout << ans << endl;
	}
}