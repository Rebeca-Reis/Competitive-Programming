#include <bits/stdc++.h>
//https://www.codepit.io/#/problems/58e804ff69194b0033572ff9/view?index=7
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e3+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int v[10][2];
vi distancia[2];

int dist(int a, int b){
	int resp= (v[a][0]-v[b][0])*(v[a][0]-v[b][0])+(v[a][1]-v[b][1])*(v[a][1]-v[b][1]);
	return resp;
}

int main(){
	int x,y;
	for(int i=1;i<=6;i++){
		cin >> x >> y;
		v[i][0]=x;
		v[i][1]=y;
	}
	distancia[0].pb(dist(1,2));
	distancia[0].pb(dist(1,3));
	distancia[0].pb(dist(2,3));
	distancia[1].pb(dist(4,5));
	distancia[1].pb(dist(4,6));
	distancia[1].pb(dist(5,6));
	sort(distancia[0].begin(),distancia[0].end());
	sort(distancia[1].begin(),distancia[1].end());
	if(distancia[0][0]*distancia[1][1] == distancia[0][1]*distancia[1][0] and distancia[0][1]*distancia[1][2] == distancia[0][2]*distancia[1][1]){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
	
