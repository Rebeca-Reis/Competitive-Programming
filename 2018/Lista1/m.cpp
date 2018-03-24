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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, f[N];

int func(int n){
	if(n<=100) return func(func(n+11));
	else if(n>=101) return f[n]= n-10;
}

int main(){
	while(cin >> n){
		if(n==0) return 0;
		if(f[n]) cout << "f91(" << n << ") = " << f[n] << endl;
 		else cout << "f91(" << n << ") = " << func(n) << endl;
	}
}

