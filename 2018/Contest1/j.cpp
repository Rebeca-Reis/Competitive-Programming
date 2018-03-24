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

ll n, x, y, esq, dir;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		if(x>0) dir++;
		else esq++;
	}
	if(dir<=1) return cout << "Yes" << endl, 0;
	else if(esq<=1) return cout << "Yes" << endl, 0;
	else return cout << "No" << endl, 0;
}
