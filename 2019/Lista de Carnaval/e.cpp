#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/1077/C
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

int n,x,ans,last;
ll total;
vector<pair<int,int>> v;
vi a;

bool compare(pair<int,int> x, pair<int,int> y){
	return x.st<y.st;
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		total+=x;
		v.pb(mp(x,i)); //guarda o indice antigo no segundo elemento do pair
	}
	sort(v.begin(), v.end(),compare);
	for(int i=0;i<n;i++){
		(i==n-1)? last= n-2 : last=n-1;
		if(total-v[i].st- v[last].st == v[last].st) ans++, a.pb(v[i].nd +1);
	}
	if(ans==0) return cout << 0 << endl, 0;
	cout << ans << endl;
	for(int i=0;i<ans;i++) cout << a[i] << " ";
	cout << endl;
}

