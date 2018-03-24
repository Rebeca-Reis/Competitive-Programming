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

int n,a,b, caso;
string s1,s2;

int main(){
	caso=1;
	while(cin >> n){
		if(n==0) return 0;
		cout << "Teste " << caso << endl;
		cin >> s1 >> s2;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			if((a+b)%2==0) cout << s1 << endl;
			else cout << s2 << endl;
		}
		cout << endl;
		caso++;
	}
}

