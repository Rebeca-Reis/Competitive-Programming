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

int t, n, l, x, ans, sum, novo, caso, ans3;
vi v;
double resto;

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		v.clear();
		ans=0, ans3=0;
		sum=0;
		cin >> n >> l;
		for(int i=0;i<l;i++){
			cin >> x;
			v.pb(x);
			novo=100*x/n;
			ans+=novo;
			sum+=x;
			resto=100*(double)x/n - novo;
			if(resto>=0.5) ans++;
		}
		if(n==10){
			cout << "Case #" << caso << ": " << 100 << endl;
			continue;
		}
		sum=n-sum;
		resto=100*(double)sum/n;
		novo=100*sum/n;
		resto-=novo;
		if(resto>=0.5) novo++;
		double ans2=100.0/(double)n - (int)100/n;
		int resp;
		(ans2>=0.5) ? resp=100/n+1 : resp=100/n;
		resp=max(resp*sum,novo);
		ans+=resp;
/*		for(int i=0;i<l;i++){
			resto=100.0*v[i];
			resp=100*(double)v[i]/n;
			resto-=resp;
			if(resto>=0.5) ans+=resp+1;
			else{
				int aux=sum;
				int ok=0;
				while(aux>0){
					resp=100*(v[i]+aux)/n;
					resto=100.0*(double)(v[i]+1)/n;
					resto-=resp;
					if(resto>=0.5){
						aux=0,ans3+=resp+1;
						ok=1;
						break;
					}
					else aux--;
				}
				if(aux==0 and!ok) ans3+=100*v[i]/n;
				else sum=aux;
			}
		}
		ans=max(ans,ans3);*/
		cout << "Case #" << caso << ": " << ans << endl;
	}
}

