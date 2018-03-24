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

void z_f(string s) {
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
	cin >> s;
	int n= s.size();
	z_f(s);
	for(int i=0;i<n;i++) cout << z[i] << " ";
	cout << endl;
}