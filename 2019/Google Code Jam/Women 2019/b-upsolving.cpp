#include <bits/stdc++.h>
//
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

int caso,t,ans,n,x,pos,cont;
vi v;
pair<int,bool> mini;
pair<int,bool> maxi;

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		ans=cont=0;
		pos=-1;
		cin >> n;
		for(int i=0;i<n+1;i++){
			cin >> x;
			v.pb(x);
		}
		maxi.st=v[0];
		mini.st=v[0];
		maxi.nd=mini.nd=false;
		for(int i=1;i<n+1;i++){
			cont++;
			if(v[i]>mini.st and mini.nd==true){
				ans++;
				maxi.st=v[i];
				mini.st=v[i];
				maxi.nd=mini.nd=false;
				pos=i;
				cont=0;
			}
			if(v[i]<maxi.st and maxi.nd==true){
				ans++;
				maxi.st=v[i];
				mini.st=v[i];
				maxi.nd=mini.nd=false;
				pos=i;
				cont=0;
			}
			if(v[i]>maxi.st) maxi.st=v[i], maxi.nd=true;
			if(v[i]<mini.st) mini.st=v[i], mini.nd=true;

		}
		if(cont>0 and ans>0) ans--;
		if(pos==n) ans--;
		cout << "Case #" << caso << ": " << ans << endl;
		v.clear();
	}
}