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

string s, u;
int cont;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]!='_') u+=s[i];	
		if(u.find("Danil")!=-1 or u.find("Olya")!=-1 or u.find("Slava")!=-1 or u.find("Ann")!=-1 or u.find("Nikita")!=-1) {
			cont++;
			u.clear();
		}
	}

	if(cont==1) return cout << "YES" << endl, 0;
	cout << "No" << endl;
}

