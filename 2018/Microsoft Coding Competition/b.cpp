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

string s;
vi v[150];
int col,u;
char c;
int a[150][150];

int main(){
	int linha=0;
	while(scanf("%d%c",&u,&c)){
		v[linha].pb(u), col++;
		if(c=='\r') break;
	}
	linha++;
	while(cin >> u){
		v[linha].pb(u);
		for(int i=0;i<col-1;i++){
			cin >> u;
			v[linha].pb(u);
		}
		linha++;
	}
	linha--;
	for(int i=0;i<=linha;i++)	
		for(int j=0;j<col;j++){
			a[i][j]=v[i][j];
		}
	for(int i=0;i<col;i++){
		for(int j=0;j<linha;j++){
			cout << a[j][i] << " ";
		}
		cout << a[linha][i] << endl;
	}
}

