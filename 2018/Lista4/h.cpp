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

int n;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	if(n%2==0){
		cout << n/2 << endl;
		while(n!=0){
			cout << 2 << " ";
			n-=2;
		}	
		cout << endl;
	}
	else{
		cout << (n-3)/2 +1 << endl;
		n-=3;
		while(n!=0){
			cout << 2 << " ";
			n-=2;
		}
		cout << 3 << endl;
	}
}

