#include <bits/stdc++.h>
//
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

unsigned long long h1[N],h2[N],h3[N],b[N],ans;
string s,r;

int main(){
	cin >> s;
	int n=s.size();
	cin >> r;
	b[0]=1;
	for(int i=1;i<n;i++){       //b[i] sao as potencias da nossa base b. b=31, primo maior que o universo dos char lowercase (26)
		b[i]=b[i-1]*31;
	}
	h1[0]=s[0];						//h1 e h2 sao hash da posição 0 até i das strings s e r, respectivamente
	for(int i=1;i<n;i++){
		h1[i]=h1[i-1]*31 + s[i];
	}
	h2[0]=r[0];
	for(int i=1;i<n;i++){
		h2[i]=h2[i-1]*31 + r[i];
	}
	h3[0]=h2[n-1]; //h3 é o hash da posição i até o final da string r
	for(int i=1;i<n;i++){
		h3[i]=h2[n-1]-h2[i-1]*b[n-i];
	}
	for(int i=0;i<n;i++){
		if(h1[i]==h3[n-i-1]) ans=i+1;
	}
	cout << n-ans << '\n';	
}	