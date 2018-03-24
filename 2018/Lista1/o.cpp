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
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int h1,m1,h2,m2,ans;

int main(){
	while(cin >> h1 >> m1 >> h2 >> m2){
		if(!h1 and !h2 and !m1 and !m2) return 0;
		ans=0;
		if(h1==h2 and m2>m1) cout << m2 - m1 << endl;
		else if(h2>h1) cout << m2+60-m1+(h2-h1-1)*60 << endl;
		else if(h2<h1) cout << m2+h2*60+60-m1+(23-h1)*60 << endl;
		else if(h2==h1 and m2<m1) cout << 24*60-m1+m2 << endl;
	}
}

