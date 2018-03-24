#include <bits/stdc++.h>
//http://codeforces.com/contest/546/problem/C/
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

deque<int> d1,d2;
int n,k1,k2,x,u,v,cont,win;

int main(){
	cin >> n >> k1;
	for(int i=0;i<k1;i++){
		cin >> x;
		d1.pb(x);
	}
	cin >> k2;
	for(int i=0;i<k2;i++){
		cin >> x;
		d2.pb(x);
	}
	while(!d1.empty() and !d2.empty()){
		u=d1.front();
		v=d2.front();
		if(u>v){
			x=d2.front();
			d2.pop_front();
			d1.pb(x);
			x=d1.front();
			d1.pop_front();
			d1.pb(x);
			cont++;
			win=1;
		}
		else{
			x=d1.front();
			d1.pop_front();
			d2.pb(x);
			x=d2.front();
			d2.pop_front();
			d2.pb(x);
			cont++;
			win=2;
		}
		if(cont > 1e6) return cout << -1 << endl, 0;
	}
	cout << cont << " " << win << endl;
}

