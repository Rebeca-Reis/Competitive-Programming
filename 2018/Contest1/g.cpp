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

string s,p,aux;
vi v;
int x;
//vector<string> t;

int is_subsequence(string s,string p){ 
	int n=s.size(); //retorna 0 se for subsequencia e 1 se nao for
	int m=p.size();
	int j=0;
	for(int i=0;i<n and j<m; i++){
		if(s[i]==p[j]) j++;
		if(j==m) break;
	}
	return (j==m) ? 0 : 1;
}

int search(int l, int r){
	if(l==r) return l;
	int mid=(l+r)/2; 
	aux=s;
	for(int i=0;i<=mid;i++){
		aux[v[i]-1]='#';
	}
	int resp=is_subsequence(aux,p);
	if(resp==0) return search(mid+1,r);
	else return search(l,mid);
}

int main(){
	cin >> s >> p;
	int u=s.size();
	for(int i=0;i<u;i++){
		cin >> x;
		v.pb(x);
	}
	/*
	for(int i=0;i<u;i++){
		aux[v[i]-1]='#';
		t.pb(aux);
	}
*/	
	cout << search(0,u-1) << endl;
}
