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

string s,p,ans;
int v[26], k;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> k >> s;
	if(k==1) return cout << s << endl, 0;
	for(int i=0;i<s.size();i++){
		v[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(v[i]%k!=0) return cout << -1 << endl, 0;
	}
	string ans="",p="";
	for(int i=0;i<26;i++){
		if(v[i]>0){
			for(int j=0;j<v[i]/k;j++) p+='a'+i;
		} 
	}
	for(int i=0;i<k;i++) ans+=p;
	cout << ans << endl;
}