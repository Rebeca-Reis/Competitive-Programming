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

int n,m,vis[N][N];
string hor,ver;
queue<ii> bfs;

int longest(int x, int y){
	bfs.push(mp(x,y));
	vis[x][y]=1;
	int ans=1;
	while(!bfs.empty()){
		int x=bfs.front().st;
		int y=bfs.front().nd;
		if(hor[x]=='<' and y-1>=0 and vis[x][y-1]==0){
			vis[x][y-1]=1;
			bfs.push(mp(x,y-1));
			ans++;
		}
		else if(hor[x]=='>' and y+1<m and vis[x][y+1]==0){
			vis[x][y+1]=1;
			bfs.push(mp(x,y+1));
			ans++;
		}
		if(ver[y]=='v' and x+1<n and vis[x+1][y]==0){
			vis[x+1][y]=1;
			bfs.push(mp(x+1,y));
			ans++;
		}
		else if(ver[y]=='^' and x-1>=0 and vis[x-1][y]==0){
			vis[x-1][y]=1;
			bfs.push(mp(x-1,y));
			ans++;
		}
		bfs.pop();
	}
	return ans;
}

int main(){
	cin >> n >> m;
	cin >> hor >> ver;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(longest(i,j)!=n*m){
				cout << "NO" << endl;
				return 0;
			}
			memset(vis,0,sizeof(vis));
		}
	}
	cout << "YES" << endl;
}

