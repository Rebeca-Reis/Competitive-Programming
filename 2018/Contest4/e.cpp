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

int n,k;
vi v;

void fp(int n){
	for(int i=2;i*i<=n;i++){
	if(n==1) break;
	while(n%i==0){
			n/=i;
			v.pb(i);
		}
	}
	if(n>1) v.pb(n);
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> k;
	fp(n);
	if(v.size() < k) return cout << -1 << endl, 0;
	int aux=1;
	for(int i=0;i<k-1;i++) cout << v[i] << " ";
	for(int i=k-1;i<v.size();i++) aux*=v[i];
	cout << aux << endl;
}

