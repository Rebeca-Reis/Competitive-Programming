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
const int N=370;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,a,b,h[N],m[N],ans;
char c;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c >> a >> b;
		if(c=='M') for(int j=a;j<=b;j++) h[j]++;
		else for(int j=a;j<=b;j++) m[j]++;
	}
	for(int i=1;i<=366;i++){
		if(h[i] and m[i]){
			ans=max(ans, min(h[i],m[i]));
//			db(h[i] _ m[i] _ ans);
		}
	}
	cout << 2*ans << endl;
}

