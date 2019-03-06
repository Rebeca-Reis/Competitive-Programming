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

ll t, d, power, ans, conts, ok, caso, cont;
string s;

int main(){
	cin >> t;
	while(t--){
		caso++;
		cin >> d >> s;
		power=1;
		ans=0;
		ok=1;
		cont=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='C') power*=2;
			else if(s[i]=='S') ans+=power;
		}
		while(ans>d){
			conts=0;
			ok=0;
			for(int i=s.size()-1;i>=0;i--){
				if(s[i]=='S') conts++;
				else if(s[i]=='C' and conts){
					s[i]='S',s[i+1]='C',ok=1,cont++;
					break;
				}
			}
			if(!ok) break;
			power=1;
			ans=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='C') power*=2;
				else if(s[i]=='S') ans+=power;
			}
		}
		if(ans>d) cout << "Case #" << caso << ": " << "IMPOSSIBLE\n";
		else cout << "Case #" << caso << ": " << cont << endl;
	}
}

