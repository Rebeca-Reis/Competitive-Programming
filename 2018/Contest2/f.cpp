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

int n,p,pos,i;


int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> p >> pos;
	pos--;
	vi v;
	if(n==1) return cout << p << '\n', 0;
	p-=n;
	int ok=1, ans=1;
	int l=pos-1, r=pos+1;
	if(p) ans++,p--;
	while(p!=0 and ok){
		int intervalo= min(r,n-1)-max(0,l)+1;
		if(p>=intervalo) ans++,p-=intervalo;
		else{
			ok=0;
			break;
		}
		l--;
		r++;
	}
 	return cout << ans << '\n', 0;
}

