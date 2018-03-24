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

int n;
stack <string> p;
string s,nome;

int main(){
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s=="Sleep"){
			cin >> nome;
			p.push(nome);
		}
		if(s=="Kick"){
			if(!p.empty()) p.pop();
		}
		if(s=="Test"){
			if(!p.empty()) cout << p.top() << '\n';
			else cout << "Not in a dream" << '\n';
		}
	}
}

