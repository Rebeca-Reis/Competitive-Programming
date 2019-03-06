#include <bits/stdc++.h>
//https://vjudge.net/contest/285611#problem/B
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

int n,mid,t,ans;

int square_root(int l, int r, int n){
	mid=(l+r)/2;
	// db(l _ mid _ r);
	if(mid*mid==n) return mid;
	if(l==r) return l;
	if(mid*mid<n) return square_root(mid+1,r,n);
	return square_root(l,mid,n);
}

int main(){
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		ans= square_root(1,n,n);
		if(ans*ans > n) ans--;
		cout << ans << endl;
	}
}