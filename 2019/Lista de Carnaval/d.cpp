#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/300/A
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

int n,x,a,b,c;
vi v;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	int low= lower_bound(v.begin(),v.end(),0) - v.begin();  //pos do 0 no vector v
	if(low==n-1){ // nao tem valores positivos
		a=1;
		b=2;
		c=n-a-b;
		cout << a << " " << v[0] << endl;
		cout << b << " ";
		for(int i=1;i<=b;i++) cout << v[i] << " ";
		cout << endl;
		cout << c << " " << 0 << " ";
		for(int i=0;i<c-1;i++) cout << v[3+i] << " ";
		cout << endl;
	} 
	else{
		a=1;
		c=low;
		b=n-a-c;
		cout << a << " ";
		cout << v[0] << endl;
		cout << b << " ";
		for(int i=low+1;i<n;i++) cout << v[i] << " ";
		cout << endl;
		cout << c << " ";  
		for(int i=1;i<=low;i++) cout << v[i] << " ";	
		cout << endl;
	}
}


