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

vi v;
int mid,n,x;

int binary_search(int l, int r, int x){
	mid= (l+r)/2;
	if(v[mid]==x) return mid;		 // encontrou o elemento
	if(l==r and v[l]!=x) return -1;  //nao encontrou o elemento
	else if(v[mid]>x) return binary_search(l,mid,x);
	else if(v[mid]<x) return binary_search(mid+1,r,x);
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	cout << "Quero o numero: " << endl;
	cin >> x;
	cout << binary_search(0,n-1,x) << endl;
}