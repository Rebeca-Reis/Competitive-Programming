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

int n, x, y,opt;
string s,r;
map <string,string> root,ant;
map <string,int> size;

string find(string s){
	if(root[s]==s) return s;
	else return root[s]=find(root[s]);
}

bool uniteS(string s, string r){
	s=find(s);
	r=find(r);
	if(s==r and ant[s]!=r and ant[r]!=s) return true;
	if(s!=r and ant[s]!=r and ant[r]!=s){
		if(size[s]>size[r]) swap(s,r);
		root[s]=r;
		size[r]+=size[s];
//		if(ant[r]!="") ant[s]=ant[r];
//		if(ant[s]!="") ant[r]=ant[s];
		return true;
	}
	return false;
}

bool uniteA(string s, string r){
	s=find(s);
	r=find(r);
	if(s==r) return false;
	if(s!=r and ant[s]!=""){
		if(!uniteS(r,ant[s])) return false;
	}
	if(s!=r and ant[r]!=""){
		if(!uniteS(s,ant[r])) return false;
	}
	if(ant[s]=="") ant[s]=r;
	if(ant[r]=="") ant[r]=s;
	return true;
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n >> x >> y;
	for(int i=0;i<n;i++){
		cin >> s;
		root[s]=s;
		size[s]=1;
	}
	for(int i=0;i<x;i++){
		cin >> opt >> s >> r;
		if(opt==1) cout << (uniteS(s,r) ? "YES" : "NO") << endl;
		else cout << (uniteA(s,r) ? "YES" : "NO") << endl;
	}
	for(auto antonimo : root){
		 ant[antonimo.st] = ant[find(antonimo.st)];
	}
	for(int i=0;i<y;i++){
		cin >> s >> r;
		s=find(s);
		r=find(r);
		if(s==r) cout << 1 << endl;
		else if(find(ant[s])==r and find(ant[r])==s) cout << 2 << endl;
		else cout << 3 << endl;
	}
}

