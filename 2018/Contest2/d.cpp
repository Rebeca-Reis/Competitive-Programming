#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define st first
#define nd second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=3e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll a,sum1,sum2,cont,n;
ll grid[N][4];
vector<ll> v1,v2;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin >> a;
			grid[i][j]=a;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum1=grid[i][0]+grid[j][1];
			sum2=grid[i][2]+grid[j][3];
			v1.pb(sum1);
			v2.pb(-sum2);
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<v1.size();i++){
		int low=lower_bound(v2.begin(),v2.end(),v1[i]) - v2.begin();
		int upper=upper_bound(v2.begin(),v2.end(),v1[i]) - v2.begin();
		cont+=upper-low;
	}
	cout << cont << '\n';
}

