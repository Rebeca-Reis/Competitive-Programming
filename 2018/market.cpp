#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/812/C
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

long long n, s, x, sum;
vi a,b;
int k;

int busca(int l, int r){
	k=(l+r)/2;
	// db(k);
	
	sum=0;
	b.clear();
	
	for(int i=0;i<n;i++) b.pb(a[i]+k*(i+1));
	sort(b.begin(),b.end());
	
	for(int i=0;i<k;i++) sum+=b[i];
	// db(sum);
	//db(l _ k _ r _ sum _ s);

	if(sum>s and r!=l+1) {cout << "here4" << endl;return busca(l,k);}
	if(sum<s and r!=l+1) {cout << "here5" << endl;return busca(k,r);}
	if(sum==s){cout << "here1" << endl;return k;}
	//if(sum<s and l==r){cout << "here2" << endl; return k;}	
	//if(sum>s and l==r){cout << "here3" << endl; return k-1;}
}

int main(){
	cin >> n >> s;
	for(int i=0;i<n;i++) cin >> x, a.pb(x);
	
	cout << busca(0,n) << " ";
	b.clear();
	
	sum=0;
	
	for(int i=0;i<n;i++) b.pb(a[i]+k*(i+1));
	sort(b.begin(),b.end());
	
	for(int i=0;i<k;i++) sum+=b[i];
	cout << sum << endl;	
}