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

ll n,x;
int v0[6]={0,1,2,2,1,0};
int v1[6]={1,0,0,1,2,2};
int v2[6]={2,2,1,0,0,1};

int main(){
	cin >> n >> x;
	if(v0[n%6]==x) return cout << 0 << endl, 0;
	if(v1[n%6]==x) return cout << 1 << endl, 0;
	if(v2[n%6]==x) return cout << 2 << endl, 0;
}