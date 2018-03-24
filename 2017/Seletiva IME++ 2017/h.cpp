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
const int N=1e6+1;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vector<int> v[N];
int soma[N],t,f[N],m[N][13];

void crivo(){
	for(int i=2;i<N;i++){
		if(v[i].empty()){
			for(int j=2*i;j<N;j+=i){
				v[j].pb(i);
				soma[j]+=i;
			}
		}
	}
}

int main(){
	cin >> t;
	crivo();
	f[2]=1;
	for(int i=3;i<N;i++) f[i]=f[soma[i]]+1;
	for(int i=2;i<N;i++) for(int k=1;k<=13;k++) m[i][k]= m[i-1][k] + (f[i]==k);
	while(t--){
		int a,b,k;
		cin >> a >> b >> k;
		if(k>13) cout << 0 << endl;
		else cout << m[b][k]-m[a-1][k] << endl;
	}
}


