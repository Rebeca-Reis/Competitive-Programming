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

int l;

ll exp(int a, int b){
	if(b==0) return 1;
	else if(b%2==0) return exp(a*a,b/2);
	else if(b%2==1) return a*exp(a*a,b/2);
}

int main(){
	cin >> l;
	cout << exp(3,l) << endl;
}