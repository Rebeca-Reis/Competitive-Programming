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
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int t,n,x;
ll ans;
vi a;
int L[N], R[N];

void merge(int l, int r){
	int mid=(l+r)/2;
	int n1=mid-l+1;
	int n2=r-mid;
	int i=0 ,j=0, p=l;
	for(int k=0;k<n1;k++) L[k]=a[l+k];
	for(int k=0;k<n2;k++) R[k]=a[mid+1+k];
	while(i<n1 and j<n2){
		if(L[i]<R[j]) a[p]=L[i], i++, p++;
		else if(R[j]<L[i]) a[p]=R[j], j++, p++, ans+=n1-i;
	}
	while(i<n1){
		a[p]=L[i];
		i++, p++;
	}
	while(j<n2){
		a[p]=R[j];
		j++, p++;
	}
}

void mergesort(int l, int r){
	int mid=(l+r)/2;
	if(r>l){
		mergesort(l,mid);
		mergesort(mid+1,r);
		merge(l,r);
	}
}

int main(){
	cin.tie(0);
	//ios_base::sync_with_stdio(0);
	cin >> t;
	while(t--){
		cin >> n;
		a.clear();
		ans=0;
		for(int i=0;i<n;i++){
			cin >> x;
			a.pb(x);
		}
		mergesort(0,n-1);	
		cout << ans << '\n';
	}
}

