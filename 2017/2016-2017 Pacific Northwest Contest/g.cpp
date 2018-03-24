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
const int N=50+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,m,pos,cont,obs,k;
char grid[N][N],resp[N][N];

int main(){
	cin >> n >> m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin >> grid[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) resp[i][j]='.';
	for(int j=1;j<=m;j++){
		pos=n+1;
		cont=0;
		obs=0;
		for(int i=n;i>=1;i--){
			if(grid[i][j]=='#') pos=i,resp[i][j]='#',cont=0,obs++;
			else if(grid[i][j]=='o' and obs!=0) cont++, resp[pos-cont][j]='o';
			else if(grid[i][j]=='o' and obs==0) cont++, resp[pos-cont][j]='o';
		}
		if(cont!=0 and obs==0) for(k=0;k<cont;++k) resp[n-k][j]='o';
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++){ 
			cout << resp[i][j];	
		}
		cout << endl;
	}
}