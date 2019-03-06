#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/975/C
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

ll n,q,x,sum,f;
vector<ll> a;


int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> q;
	for(int i=0;i<n;i++){
		cin >> x;
		a.pb(x);
		sum+=x;
	}
	if(n>1) for(int i=1;i<n;i++) a[i]+=a[i-1];
	for(int i=0;i<q;i++){
		cin >> x;
		if(f+x>=sum){
			cout << n << endl;
			f=0;
		}
		else{
			f+=x;
			int low= lower_bound(a.begin(),a.end(),f)- a.begin();
			if(a[low]>f) cout << n-low << endl; //o cara na posiçao low nao morreu
			else cout << n-low-1 << endl; // f é exatamente igual a a[low]. o cara ali morreu tb
		}
	}
}