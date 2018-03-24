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

int n, ok;
stack<char> p;
string s;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	cin.ignore();
	while(n--){
		ok=0;
		getline(cin,s);
		while(!p.empty()) p.pop();
		if(s.size()==0){
			cout << "Yes" << endl;
			ok=1;
		}
		if(!ok) p.push(s[0]);
		if(s.size()%2==1){
			cout << "No" << endl;
			ok=1;
		}
		if(!ok){
			for(int i=1;i<s.size();i++){
				if(!p.empty()){
					if(p.top()=='(' and s[i]==')') p.pop();
					else if(p.top()=='[' and s[i]==']') p.pop();
					else p.push(s[i]);
				}
				else{
					p.push(s[i]);
				}
			}
			if(p.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
}

