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

int t,x,mid,d,ok;

bool can(ll n, ll ang){
	d=ang*n;
	if(d%180!=0) return false;
	d/=180;
	if(d <= n-2) return true;
	return false;
}

int main(){
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> x;
		for(int j=3;j<=360;j++){
			if(can(j,x)){
				cout << j << endl;
				ok=1;
				break;
			}
		}
		if(!ok) cout << -1 << endl;   //impossivel
	}
}