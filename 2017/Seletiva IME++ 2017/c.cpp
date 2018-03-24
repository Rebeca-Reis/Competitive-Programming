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
const int N2= 1e6+5;

int c,v[N],n,a,cont[N2];

int main(){
	cin >> n >> a;
	for(int i=1;i<=n;i++) cin >> v[i];
	for(int i=1;i<=n;i++){
		if(v[i]==a) c++;
		else if(cont[v[i]]>=c) cont[v[i]]++;
	}
	for(int i=1;i<N2;i++) if(cont[i]>=c and i!=a){
		cout << i << endl;
		return 0;
	}
	cout << -1 << endl;
}

