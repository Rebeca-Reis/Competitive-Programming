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

int n, l, aux,ok;
string s;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	while(n--){
		cin >> s;
		l=-5;
		ok=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>= 'A' and s[i]<='Z') aux=s[i]-'A';
			else aux=s[i]-'a';
			if(aux<=l){
				cout << s << ": N" << endl;
				ok=1;
				break;
			}
			else l=aux;
		}
		if(!ok) cout << s << ": O" << endl;
	}
}

