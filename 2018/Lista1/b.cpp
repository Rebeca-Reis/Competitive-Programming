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

int a,b,c;

int main(){
	while(cin >> a >> b >> c){
		if(a!=b and a!=c) cout << "A" << endl;
		else if(b!=a and b!=c) cout << "B" << endl;
		else if(c!=a and c!=b) cout << "C" << endl;
		else if(c==a and c==b) cout << "*" << endl;
	}
}