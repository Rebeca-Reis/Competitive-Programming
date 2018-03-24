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
const int MOD=2e6+7;
const int INF=0x3f3f3f3f;

int crivo[N];

void primo(){
	crivo[1]=1;
	for(int i=2;i*i<N;i++){
		if(!crivo[i]){
			for(int j=2*i;j<N;j+=i) crivo[j]=1;
		}
	}
}

int main(){
	int n;
	cin >> n;
	primo();
	cout << (crivo[n]==0 ? "sim" : "nao") << endl;
}

