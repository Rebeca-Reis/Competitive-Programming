#include <bits/stdc++.h>
//http://www.spoj.com/problems/NAKANJ/
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

int t,yi,yf;
char c1,c2;
int dx[8]={1,1,2,2,-1,-1,-2,-2};
int dy[8]={2,-2,1,-1,2,-2,1,-1};
//map <pair<int,int>, pair<int,int>> adj; nao precisa!
int vis[8][8];
queue <pair<int,int> > bfs;

void minimum(int x,int y){
	bfs.push(mp(x,y));
	while(!bfs.empty()){
		pair<int,int> v= mp(bfs.front().first,bfs.front().second);
		for(int i=0;i<8;i++){
			if(x+dx[i]>0 and x+dx[i]<9 and y+dy[i]>0 and y+dy[i]<9 and !vis[x+dx[i],y+dy[i]]){
				pair<int,int> w= mp(x+dx[i],y+dy[i]);
				vis[w.first][w.second]=vis[v.first][v.second] + 1;
				bfs.push(w);
			}
		}
		bfs.pop();
	}
}

int main(){
	cin >> t;
	while(t--){
		memset(vis,0,sizeof(vis));	
		scanf(" %c%d %c%d",&c1,&yi,&c2,&yf);
		int xi= c1-'a'+1;
		int xf= c2-'a'+1;
		//cout << xi _ xf << endl;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=9;j++){
				vis[i][j]=0;
			}
		}
		minimum(xi,yi);
		cout << vis[xf][yf] << endl;
	}
}