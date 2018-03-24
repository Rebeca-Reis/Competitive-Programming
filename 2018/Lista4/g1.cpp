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

vi fp;
int n,k,aux,cont,cont2;

void factor(int n){
	for(int i=2;i*i<=n;i++){
		if(n==1) break;
		if(n%i==0){
			while(n%i==0) fp.pb(i), n/=i, cont2++;
		}
	}
	if(n>1) fp.pb(n),cont2++;
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> k;
	factor(n);
	cont=0;
	if(cont2<k) return cout << -1 << endl, 0;
	for(int i=0;i<k-1;i++) cout << fp[i] << " ";
	aux=1;
	for(int i=k-1;i<fp.size();i++) aux*=fp[i];
	cout << aux << endl;
}

