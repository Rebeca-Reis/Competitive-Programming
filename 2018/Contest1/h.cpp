#include <bits/stdc++.h>
//https://www.codepit.io/#/contest/5a87842201a96e00194060ee/view?upsolving=1
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

int a,b,ans;

int f(int a, int b){
	if(a<=0 or b<=0) return 1;
	else if(a>b) return 1+f(a-2,b+1);
	else if(b>a) return 1 + f(a+1,b-2);
	else if(a==b) return 1 + f(a+1,b-2);
}

int main(){
	cin >> a >> b;
	if(a==1 and b==1) return cout << 0 << endl, 0;
	cout << f(a,b) - 1 << endl;
}