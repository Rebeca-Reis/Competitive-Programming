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

int n,a,b,c,ans;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> a >> b >> c;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(a*i+b*j>n){
				break;
			}
			if((n-a*i-b*j)%c == 0) ans=max(ans,i+j+(n-a*i-b*j)/c); 
		}
	}
	cout << ans << '\n';
}

