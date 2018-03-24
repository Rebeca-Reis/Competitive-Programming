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

int n, x, ans,aux1,aux2;
vi a,b;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		a.pb(x);
	}
	for(int i=0;i<n;i++){
		cin >> x;
		b.pb(x);
	}
	for(int l=0;l<n;l++){
		aux1=0,aux2=0;
		for(int r=l;r<n;r++){
			if(l==r){ 
				aux1=a[l] | a[l];
				aux2=b[l] | b[l];
				ans=max(ans,aux1+aux2);
				aux1=a[l];
				aux2=b[l];
			}
			else{
				aux1=aux1 | a[r];
				aux2=aux2 | b[r];
				ans=max(ans,aux1+aux2);
			}
		}
	}
	cout << ans << endl;
}
