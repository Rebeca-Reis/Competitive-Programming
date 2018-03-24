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

ll l,r;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> l >> r;
	if(r-l==1 or l==r) cout << -1 << endl;
	else if(r-l==2 and l%2) cout << -1 << endl;
	else if(r-l==2 and l%2==0) cout << l << " " << l+1 << " " << l+2 << endl;
	else if(r-l>=3){
		if(l%2==0) cout << l << " " << l+1 << " " << l+2 << endl;
		else cout << l+1 << " " << l+2 << " " << l+3 << endl;
	}
}

