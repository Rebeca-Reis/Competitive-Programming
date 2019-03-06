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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t, z[N], x;
string s, pat;
vi ans;

void z_f(string s){
  int l=0,r=0, n=s.size();
	for(int i = 1; i<n; i++){
		if(i <= r)
			z[i]=min(z[i-l],r-i+1);
		while(z[i]+i<n and s[z[i]+i]==s[z[i]])
			z[i]++;
		if(r<i+z[i]-1)
			l=i,r=i+z[i]-1;
	}
}

int main(){
	cin >> t;
	while(t--){
		s.clear();
		pat.clear();
		cin >> s >> pat;
		x=pat.size();
		ans.clear();
		memset(z,0,sizeof(z));
		pat+="#";
		pat+=s;
		z_f(pat);
		for(int i=0;i<pat.size();i++) if(z[i]==x) ans.pb(i-x);
		if(ans.size()==0) cout << "Not Found" << endl;
		else{
			cout << ans.size() << endl;
			for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
			cout << endl;
		}
		cout << endl;
	}
}
