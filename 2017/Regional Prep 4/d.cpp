#include <bits/stdc++.h>
//https://www.codepit.io/#/problems/58e804ff69194b0033572ffb/view?index=9
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=3e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int main()
{
	int n,m;
	ll pot[N];
	pot[0] = 1;
	for(int i=1;i<N;i++){

		pot[i] = (pot[i-1]*2)%MOD;
	}

	while(scanf("%d%d",&n,&m)!=EOF){
		int cont = 0;
		string s;
		cin >> s;
		ll a = 0;
		for(int i=0;i<n;i++)
		{
			a = (a*10) % m;
			a = (a + s[i]-'0') % m;
			if(a==0){
				cont++;
			} 
		}
		if(a!=0) cout << 0 << endl;
		else cout << pot[cont-1] << endl;

	}
}