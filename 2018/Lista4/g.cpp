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

map<int,int> fp;
int n,k,resto,aux,cont,cont2;

void factor(int n){
	for(int i=2;i*i<=n;i++){
		if(n==1) break;
		if(n%i==0){
			while(n%i==0) fp[i]++, n/=i, cont2++;
		}
	}
	if(n>1) fp[n]++,cont2++;
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> k;
	factor(n);
	cont=0, resto=0;
	if(cont2<k) return cout << -1 << endl, 0;
	aux=1;
	for(auto p : fp){
		if(cont + p.nd<k){
			for(int i=0;i<p.nd;i++) cout << p.st << " ";
			cont+=p.nd;
		}
		else if(cont==k-1){
			for(int j=0;j<p.nd;j++) aux*=p.st;
		}
		else if(cont + p.nd >= k){
			while(cont != k-1){
				for(int i=1;i<=p.nd;i++){
					cout << p.st << " ";
					cont++;
					if(cont == k-1){
						resto= p.nd-i;
						break;
					}
				}
			}
			if(resto==0){ continue;}
			if(resto>0){
				for(int j=0;j<resto;j++) aux*=p.st;
			}
		}
	}
	cout << aux << endl;
}

