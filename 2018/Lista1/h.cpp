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

string s;
int n,a[30];
set<int> v;

int main(){
	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i]>64 and s[i]<91){
				a[s[i]-'A']++;
				v.insert(-a[s[i]-'A']);
			//	db(s[i] _ s[i]-'A' _ a[s[i]-'A']);
			}
			else if(s[i]>96 and s[i]<123){
				a[s[i]-'a']++;
				v.insert(-a[s[i]-'a']);
			//	db(s[i] _ s[i]-'a' _ a[s[i]-'a']);
			}
		}
		int x;
		for(int u : v){
		 x= -u;
		// db(-u);
		 break;
		}
		for(int i=0;i<30;i++){
//			db(a[i] _ x);
			if(a[i]==x){
				char c = 'a' + i;
				cout << c;
			}
		}
		cout << endl;
		memset(a,0,sizeof(a));
		v.clear();
		s.erase(s.begin(),s.end());
	}
}

