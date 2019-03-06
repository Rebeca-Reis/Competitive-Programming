#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define st first
#define nd second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll n,a,sum;
bool ans;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		sum+=a;
		if(a%2==1 and !ans) ans=true;
	}
	if(sum%2==1) return cout << "First" << endl, 0;
	if(!ans) return cout << "Second" << endl, 0;
	cout << "First" << endl, 0;
}

