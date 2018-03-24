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

int busca(int l, int r, int x){
	int mid=(l+r)/2;
	if(r>=l){
		if(v[mid]==x) return mid;
		else if(v[mid]>x) return busca(l,mid-1,x);
		else return busca(mid+1,r,x);
	}	
	else if(r==l and v[mid]==x) return mid;
	return -1;
}

int main(){
	v.pb(1);
	v.pb(2);
	v.pb(5);
	v.pb(7);
	v.pb(8);
	v.pb(10);
	v.pb(10);
	v.pb(11);
	int ans= busca(0,v.size()-1,10);
	ans == -1 ? cout <<  "Ñao existe esse elemento!" << endl : cout << ans << endl; 
	vector<int>:: iterator i= upper_bound(v.begin(), v.end(),10);
	cout << i-v.begin() << endl;

}


