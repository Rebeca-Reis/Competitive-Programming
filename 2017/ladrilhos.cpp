#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2246

int h,l,grid[205][205],vis[205][205];
int sum,ans=10e8+5;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};

void dfs(int x, int y){
	if(vis[x][y]) return;
	vis[x][y]=1;
	sum++;
	for(int i=0;i<4;i++){
		if(!vis[x+dx[i]][y+dy[i]] and grid[x+dx[i]][y+dy[i]] == grid[x][y]) dfs(x+dx[i],y+dy[i]); 
	}
}

int main(){
	cin >> h >> l;
	for(int i=1;i<=h;i++) for(int j=1;j<=l;j++) cin >> grid[i][j];
	for(int j=0;j<l+2;j++) vis[0][j]=vis[h+1][j]=1;
	for(int i=0;i<h+2;i++) vis[i][0]=vis[i][l+1]=1;
	for(int i=1;i<=h;i++) for(int j=1;j<=l;j++) if(!vis[i][j]) sum=0, dfs(i,j), ans=min(ans,sum);
	cout << ans << endl;
}