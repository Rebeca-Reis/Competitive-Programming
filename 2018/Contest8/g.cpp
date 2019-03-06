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

ll n,current,x,ans,ok,cont;
stack<ll> p;
string s;

int main(){
	cin >> n;
	current=1;
	while(cin >> s){
		if(s=="add"){
			cin >> x;
			p.push(x);
			cont++;
		}
		if(s=="remove"){
			if(p.empty()) current++,cont++;
			else if(p.top()!=current){
				ans++,current++,cont++;
				while(!p.empty()) p.pop();
			}
			else current++,cont++,p.pop();
		}
		if(cont==2*n) break;
	}
	cout << ans <<  endl;			
}
