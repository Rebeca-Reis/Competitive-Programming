#include <bits/stdc++.h>
//http://codeforces.com/group/3qadGzUdR4/contest/101704/problem/U
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

int k,v[N];
int cont;

void crivo(){
	v[1]=1;
	for(int i=2;i*i<=N;i++){
		if(!v[i]) 
			for(int j=2*i;j<N;j+=i) v[j]=1; //para otimizar, comoce o j de j=i*i
	}
}

int main(){
	cin >> k;
	crivo();
	int i;
	for(i=2;cont<k;++i) if(v[i]==0) cont++;
	cout << i-1 << endl;
}