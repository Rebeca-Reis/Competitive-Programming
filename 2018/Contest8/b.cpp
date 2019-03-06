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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll qt[N], dp[N],n,x,maxi;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x;
		maxi=max(x,maxi);
		qt[x]++;
	}
	dp[1]=qt[1];
	for(int i=2;i<=maxi;i++){
		dp[i]=max(dp[i-1],dp[i-2]+qt[i]*i);
	}
	cout << dp[maxi] << endl;
}

