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
const int N=1e7+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,sieve[N],ans;

void crivo(int n){
	for(int i=2;i*i<=n;i++){
		if(!sieve[i]){
			for(int j=i*i;j<=n;j+=i) sieve[j]=1;
		}
	}
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	if(n==3) return cout << 1 << endl, 0;
	crivo(n);
	for(int i=2;i<=n/2;i++){
//		db(i _ sieve[i]);
		if(sieve[i]==0 and n%i!=0){
			ans++;
			db(i _ sieve[i]);
		}
	}
	cout << ans+1 << '\n';
}

