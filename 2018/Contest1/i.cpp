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
const int N=5e3+5;
const int MOD=998244353;
const int INF=0x3f3f3f3f;

ll a,b,c,f[N],m[N][N];

int main(){
	cin >> a >> b >> c;
	f[0]=f[1]=1;
	for(int i=2;i<N;i++){
		f[i]=(i*f[i-1])%MOD;
	}
	m[1][0]=1;
	m[1][1]=1;
	m[2][0]=1;
	m[2][1]=2;
	m[2][2]=1;
	for(int i=3;i<N;i++){
		for(int j=0;j<=i;j++){
			if(j==0) m[i][j]=1;
			else m[i][j]=(m[i-1][j-1]+m[i-1][j])%MOD;
		}
	}
	ll ans1=0, ans2=0, ans3=0;
	for(int k=0;k<=min(a,b);k++){
		ans1=(ans1+(((m[a][k]*m[b][k])%MOD)*f[k])%MOD)%MOD;
	}
	for(int k=0;k<=min(a,c);k++){
		ans2=(ans2+(((m[a][k]*m[c][k])%MOD)*f[k])%MOD)%MOD;
	}
	for(int k=0;k<=min(c,b);k++){
		ans3=(ans3+(((m[c][k]*m[b][k])%MOD)*f[k])%MOD)%MOD;
	}
	cout << (((ans1*ans2)%MOD)*ans3)%MOD << endl;
}

