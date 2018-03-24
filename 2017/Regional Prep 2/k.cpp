#include <bits/stdc++.h>
//https://www.codepit.io/#/problems/58e804ff69194b0033572ffc/view?index=10
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n,k,v[N],cont;

int main(){
	cin >> n >> k;
	int l=1, r=n;
	for(int i=n;i>=1;i--){
		(k>=i-1)? (v[i]=l, l++, k-= i-1) : (v[i]=r, r--); 
	}
	for(int i=1;i<n;i++) cout << v[i] << " ";
	cout << v[n] << endl;
}
