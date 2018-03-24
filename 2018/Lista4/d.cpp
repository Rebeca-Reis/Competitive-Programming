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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int sieve[N], n;

void crivo(){
	for(int i=2;i*i<N;i++){
		if(!sieve[i]){
			for(int j=i*i;j<N;j+=i) sieve[j]=1;
		}
	}
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	crivo();
	int a=4;
	int b=n-a;
	while(sieve[a]==0 or sieve[b]==0){
		a++;
		b--;
	}
	cout << a << " " << b << endl;
}

