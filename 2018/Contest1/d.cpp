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

ll a,b,c,n,u;

int main(){
	cin >> n;
	for(int a=0;a<1e3+5;a++){
		for(int b=0;b<1e4+5;b++){
			if((n-a*1234567-b*123456)>=0 and(n-a*1234567-b*123456)%1234==0) return cout << "YES" << endl, 0;
		}
	}
	return cout << "NO" << endl,0;
}