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

ll n,ans,f,inside;
string c;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	ans=1;
	for(int i=0;i<n;i++){
		cin >> c;
		if(c=="f" and f==0) f++;
		else if(c=="s" and f>0) inside=1;
		else if(c=="f" and f>0 and inside==1) f++, inside=0, ans*=2;
		else if(c=="f" and f>0 and inside==0) f++;
		ans = ans%MOD;
	}
	cout << ans << endl;
}

