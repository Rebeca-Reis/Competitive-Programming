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

int n,m,grid[105][105];
int ans,sum;

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<m;j++){
			cin >> grid[i][j];
			sum+=grid[i][j];
		}
		ans=max(ans,sum);
	}
	for(int j=0;j<m;j++){
		sum=0;
		for(int i=0;i<n;i++){
			sum+=grid[i][j];
		}
		ans=max(ans,sum);
	}
	cout << ans << endl;
}


