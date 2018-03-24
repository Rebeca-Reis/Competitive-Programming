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

map<int, int> trie[N];
int trien = 1, vis[N],ans;
string s,aux;

int add(int u, char c){
  c-='a';
  if (trie[u][c]) return trie[u][c];
  return trie[u][c] = ++trien;
}

void dfs(int u, int dist){
	ans+=dist;
	for(auto x : trie[u]){
		if(x.second) dfs(x.second,dist+1);
	}
}

int main(){
	cin >> s;
	//to add a string s in the trie
	int u = 1;
	char c;
	for(int i=0;i<s.size();i++){
		for(int j=i;j<s.size();j++){
			c=s[j]; 
			u = add(u, c);
		}
	}
	for(int i=0;i<25;i++) cout << trie[i][2] << endl;
	dfs(1,0);
	cout << ans << endl;	
}