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
const int N=1e6+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,k,r,u[N],x,cont,resp;

int main(){
	cin >> n >> k >> r;
	for(int i=0;i<k;i++) cin >> x, u[x]=1;
	for(int i=1;i<=r;i++) if(u[i]) cont++;
	//cout << cont << endl;
	// for(int i=1;i<=n;i++) cout << u[i] << " ";
	// cout << endl;
	if(cont==0) u[r]=1, u[r-1]=1,resp+=2, cont=2; 
	else if(cont==1) resp++, cont=2, (u[r]==1) ? u[r-1]=1 : u[r]=1;
	// for(int i=1;i<=n;i++) cout << u[i] << " ";
	// cout << endl;
	if(r<n){
		for(int i=r+1;i<=n;i++){
			cont-=u[i-r];
			cont+=u[i];
			// cout << cont << endl;
			// for(int j=1;j<=n;j++) cout << u[j] << " ";
			// cout << endl;
			if(cont==0) u[i]=1, u[i-1]=1, resp+=2, cont=2; 
			else if(cont==1) resp++, cont=2, (u[i]==1) ? u[i-1]=1 : u[i]=1;
			// for(int j=1;j<=n;j++) cout << u[j] << " ";
			// cout << endl;
		}
	}
	cout << resp << endl;
}