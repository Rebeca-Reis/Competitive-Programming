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

int a,b,n,t1,t2;

int main(){
	while(cin >> n){
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			if(a>b) t1++;
			else if(a<b) t2++;
		}
		cout << t1 << " " << t2 << endl;
		t1=t2=0;
	}
}