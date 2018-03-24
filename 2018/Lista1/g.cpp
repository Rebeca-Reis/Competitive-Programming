#include <bits/stdc++.h>

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

char c;
string s,ans;
int zeros, cont;

int main(){
	while(cin >> c >> s){
		if(c=='0' and s=="0") return 0;
		zeros=0;
		cont=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=c)ans+=s[i];
		}
		for(int i=0;i<ans.size();i++){
			if(ans[i]=='0') zeros++;
			else{
				cont++;
				break;
			}
		}
		if(zeros==ans.size()) cout << 0 << endl;
		else if(zeros and cont){
			for(int i=zeros;i<ans.size();i++) cout << ans[i];
			cout << endl;
		}
		else cout << ans << endl;
		ans.erase(ans.begin(),ans.end());
	}
}

