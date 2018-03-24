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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string s;
int z[N];

void z_f() {
  int l=0,r=0, n=s.size();
  for(int i = 1; i<n; i++) {
    if(i <= r)
      z[i]=min(z[i-l],r-i+1);
    while(z[i]+i<n and s[z[i]+i]==s[z[i]])
      z[i]++;
    if(r<i+z[i]-1)
      l=i,r=i+z[i]-1;
  }
}

int main(){
  cin.tie(0), ios_base::sync_with_stdio(0);
	while(cin >> s){
  	int n= s.size();
    bool ok = 0;
  	z_f();
  	for(int i=0;i<n;i++){
      if(i+z[i]==n){
        cout << s.substr(0,i) << '\n';
        ok = 1;
        break;
      }
    }
    if(!ok) cout << s << '\n';
    for(int i = 0; i < s.size(); i++) z[i] = 0;
  }
}