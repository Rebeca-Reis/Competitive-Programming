#include <bits/stdc++.h>

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

ll l,r,ans,ok,u;

ll f(ll n){
//	db(n);
	if(n==1) return 1;
  if(n%2==0) return 1+f(n/2);
	else return 1 + f(3*n+1);
}

int main(){
	while(cin >> l >> r){
		ok=0;
		if(l>r){
			int x=r;
			r=l;
			l=x;
			ok=1;
		}
		ans=0;
		for(ll i=l;i<=r;i++){
			ans=max(ans,f(i));			
		}
		if(!ok) cout << l << " " << r << " " << ans << endl;
		else  cout << r << " " << l << " " << ans << endl;

	}
}

