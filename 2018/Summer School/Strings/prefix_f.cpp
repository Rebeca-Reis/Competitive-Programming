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
int p[N];

void pf()
{
    int n = s.length();
    p[0]=0;
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1];
        while(s[i]!=s[p[i]] and p[i]>0) p[i] = p[p[i]-1];
        if(s[i]==s[p[i]]) p[i]++;
    }
}

int main(){
  cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> s;
  pf();
  int n=s.size();
	for(int i=0;i<n;i++) cout << p[i] << " ";
	cout << '\n';
}