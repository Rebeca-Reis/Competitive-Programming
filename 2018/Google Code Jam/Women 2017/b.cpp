#include <bits/stdc++.h>
//https://code.google.com/codejam/contest/12224486/dashboard#s=p1
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

int t,n;
double p, ans;
vector<double> v;

int main(){
	cin >> t;
	int caso=0;
	while(t--){
		caso++;
		ans=1;
		cin >> n;
		for(int i=0;i<2*n;i++){
			cin >> p;
			v.pb(p);
		}
		sort(v.begin(),v.end());
		int a=v.size();
		//db(a);
		for(int i=0;i<a/2;i++){
			ans*=(1-v[i]*v[a-i-1]);
		//	db(ans);

		}
		printf("Case #%d: %.6f\n",caso,ans);
		v.clear();
	}
}