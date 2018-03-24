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
const int N=1e4+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

ll a,t,n,x[N],h[N],k_maxi,esq[N],dir[N],k,base,prefix[N];

int main(){
	cin >> t;
	while(t--){
		cin >> a >> n;
		ll ans=0,maxi=0;
		for(int i=1;i<=n;i++) cin >> x[i];
		prefix[1]=x[1];
		for(int i=2;i<=n;i++) prefix[i]=prefix[i-1]+x[i];
		for(int i=0;i<=n;i++){
			cin >> h[i];
			if(h[i]>maxi) maxi=h[i],k_maxi=i;
		}
		esq[1]=0;
		dir[n-1]=n;
		for(int i=2;i<=n;i++) (h[i-1]>h[esq[i-1]]) ? esq[i]=i-1 : esq[i]=esq[i-1];
		for(int i=n-2;i>=0;i--) (h[i+1]>h[dir[i+1]]) ? dir[i]=i+1 : dir[i]=dir[i+1];
		k=k_maxi;
		while(k<n){
			base=prefix[dir[k]]-prefix[k];
			ans+=a*base*h[dir[k]];
			k=dir[k];
		}
		k=k_maxi;
		while(k>0){	
			base=prefix[k]-prefix[esq[k]];
			ans+=a*base*h[esq[k]];
			k=esq[k];
		}
		memset(h,0,sizeof(h));
		memset(prefix,0,sizeof(prefix));
		memset(x,0,sizeof(x));
		cout << ans << endl;
	}
}

