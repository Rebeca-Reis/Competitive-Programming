#include <bits/stdc++.h>
//http://www.spoj.com/problems/LABYR1/
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

int vis[N][N], grid[N][N];
int t,c,r,a,b, maxi;
queue <pair <int,int> > bfs;
pair<int,int> ans;
char s;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};


pair<int,int> longest(int x, int y){
	bfs.push(mp(x,y));
	//vis[x][y]=1;
	while(!bfs.empty()){
		x=bfs.front().first;
		y=bfs.front().second;
		for(int i=0;i<4;i++){
			if(grid[x+dx[i]][y+dy[i]] and !vis[x+dx[i]][y+dy[i]]) 
			{
				vis[x+dx[i]][y+dy[i]]= vis[x][y]+1, bfs.push(mp(x+dx[i],y+dy[i]));
			}
		}
		ans=bfs.back(); 
		bfs.pop();
	}
	return ans;
}

int main(){
	cin >>t;
	while(t--){
		memset(grid,0,sizeof(grid));
		cin >> c >> r;
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cin >> s;
				if(s=='#') grid[i][j]=0;
				else grid[i][j]=1, a=i, b=j;
			}
		}
		//db(a _ b);
		pair<int,int> p1= longest(a,b);
		//db(p1.first _ p1.second);
		memset(vis,0,sizeof(vis));
		pair<int,int> p2= longest(p1.first,p1.second);
		//db(p2.first _ p2.second);
		cout << "Maximum rope length is " << vis[p2.first][p2.second] << "." << endl;
	}
}
