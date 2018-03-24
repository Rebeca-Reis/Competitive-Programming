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

int n, m,ans;
char c;
map<int,int> esq, dir;

int main(){
	while(cin >> n){
		for(int i=0;i<n;i++){
			cin >> m >> c;
			if(c=='E') (esq.count(m)>0) ? esq[m]++ : esq[m]=1;
			else  (dir.count(m)>0) ? dir[m]++ : dir[m]=1;
		}
		ans=0;
		for(int i=30;i<=60;i++){
			if(esq.count(i) and dir.count(i))	ans+=min(esq[i],dir[i]);
		}
		cout << ans << endl;
		esq.clear();
		dir.clear();
	}
}

