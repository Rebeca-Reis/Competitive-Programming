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
const int N=1e2+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int lin, col,grid[N][N],ans,vis[N][N];
int dx[8]={1,1,1,-1,-1,-1,0,0};
int dy[8]={0,1,-1,0,1,-1,1,-1};
queue<ii> bfs;
char x;

void longest(int x, int y){
	vis[x][y]=1;
	bfs.push(mp(x,y));
	while(!bfs.empty()){
		int x=bfs.front().st;
		int y=bfs.front().nd;
		for(int i=0;i<8;i++){
			if(x+dx[i]>0 and x+dx[i]<=lin and y+dy[i]>0 and y+dy[i]<=col){
				if(!vis[x+dx[i]][y+dy[i]] and grid[x+dx[i]][y+dy[i]]==1){
					vis[x+dx[i]][y+dy[i]]	= 1;
					bfs.push(mp(x+dx[i],y+dy[i]));
				}
			}
		}
		bfs.pop();
	}
}

int main(){
	while(cin >> lin >> col){
		if(lin==0 and col==0) return 0;
		for(int i=1;i<=lin;i++){
			for(int j=1;j<=col;j++){
				cin >> x;
				if(x=='*') grid[i][j]=0;
				else grid[i][j]=1;
			}
		}
		ans=0;
		for(int i=1;i<=lin;i++){
			for(int j=1;j<=col;j++){
				if(grid[i][j]==1 and vis[i][j]==0){
					longest(i,j);
					ans++;
				}
			}
		}
		cout << ans << endl;
		memset(grid,0,sizeof(grid));
		memset(vis,0,sizeof(vis));
	}
}

