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
const int N=4e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,a,b,c;
int dp[N];

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> a >> b >> c;
	dp[a]=1;
	dp[b]=1;
	dp[c]=1;
	int j;
	for(int i=1;i<=n;i++){
		j=i-a;
		if(j>0 and dp[j]!=0) dp[i]=max(dp[i],1+dp[j]);
		j=i-b;
		if(j>0 and dp[j]!=0) dp[i]=max(dp[i],1+dp[j]);
		j=i-c;
		if(j>0 and dp[j]!=0) dp[i]=max(dp[i],1+dp[j]);
	}
//	for(int i=0;i<=n;i++) cout << dp[i] << " ";
//	cout << endl;
	cout << dp[n] << endl;
}

