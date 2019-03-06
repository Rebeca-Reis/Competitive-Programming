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

int caso,t,n,ok,r,c,dir;
char m[105][105];

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		cin >> r >> c >> n;
		if(n==r*c-1){
			cout << "Case #" << caso << ": IMPOSSIBLE" << endl;
		}
		else{
			if(c!=1){
				for(int i=1;i<=r;i++){
					ok=0;
					dir =0;
					for(int j=c;j>=1;j--){
						if(n>0) m[i][j]='E',ok=1, n--;
						else{
							if(ok and i!=r) m[i][j]='S';
							else{
								if(dir==0 and j!=1) m[i][j]='W', dir=1;
								else m[i][j]= 'E', dir=0;
							}
						}
					}
				}
			}
			if(c==1){
				for(int i=1;i<=n;i++){
					m[i][1]='E';
				}
				for(int i=n+1;i<=r;i++){
					m[i][1]='S';
				}
				if(n!=r) m[r][1]='N';
			}
			cout << "Case #" << caso << ": POSSIBLE" << endl;
			for(int i=1;i<=r;i++){
				for(int j=1;j<=c;j++){
					cout << m[i][j];
				}
				cout << endl;
			}
		}
	}
}
