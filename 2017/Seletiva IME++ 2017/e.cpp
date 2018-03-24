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
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string n;
int t,v[5]={76,16,56,96,36};

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		if(n=="0") cout << 1 << endl;
		else if(n=="1") cout << 66 << endl;
		else{
			int aux=n[n.size()-1]-'0';
			aux=aux%5;
			cout << v[aux] << endl;
		}
	}
}

