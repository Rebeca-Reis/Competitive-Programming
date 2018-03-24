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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int v[10]={6,2,5,5,4,5,6,3,7,6};
string s;

int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		int ans=0;
		for(int i=0;i<s.size();i++){
			//db(s[i] _ s[i]-'0' _ v[s[i-'0']]);
			ans+=v[s[i]-'0'];
		}
		cout << ans << " leds" << endl;
	}
}