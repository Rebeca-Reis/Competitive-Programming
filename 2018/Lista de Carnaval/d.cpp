#include <bits/stdc++.h>
//
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=100;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string s;
int v[N],ans,ok;

int main(){
	while(cin >> s){
		ans=ok=0;
		for(int i=0;i<s.size();i++){
			v[s[i]-'a']++;
			//db(s[i] _ v[s[i]-'a']);
		}
		for(int i=0;i<N;i++){
			if(v[i]%2 == 1 and ok==0) ok=1;
			else if(v[i]%2==1 and ok) ans++; 
		}
		cout << ans << endl;
		memset(v,0,sizeof(v));
	}
}
