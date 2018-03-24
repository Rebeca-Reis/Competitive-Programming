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

ll n, k,mini,maxi;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> k;
	if(k==1) return cout << n*(n-1)/2 << " " <<  n*(n-1)/2 << endl, 0;
	n-=k;
	if(n==0) return cout << 0 << " " << 0 << endl, 0;
	maxi=n*(n+1)/2;
	ll x=n/k;
	ll resto= n%k;
	x++; //quantidade de pessoas em cada grupo
	mini=x*(x-1)/2;
	mini*=(k-resto);
	x++;
	mini+=(x*(x-1)/2)*resto;
	cout << mini << " " << maxi << endl;
}

