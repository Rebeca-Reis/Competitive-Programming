#include <bits/stdc++.h>
//https://www.codepit.io/#/problems/58e804ff69194b0033572ff6/view?index=4
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=505;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

queue <pair <int,int> > bfs;
int n,m,l1[N][N],l2[N][N],l3[N][N],vis[N][N]; //0 é # e 1 é livre (.)
char c;
int dx[4]={0,1,-1,0},dy[4]={1,0,0,-1};

int dist1(){
	bfs.push(mp(0,0));
	vis[0][0] = 1;
	while(!bfs.empty()){
		pair<int,int> v= bfs.front();
		int x= v.first;
		int y= v.second;
		bfs.pop();
		for(int i=0;i<=3;i++){
			if(x+dx[i]<n and y+dy[i]<m and x+dx[i]>=0 and y+dy[i]>=0){
				if(!vis[x+dx[i]][y+dy[i]] and l1[x+dx[i]][y+dy[i]]) vis[x+dx[i]][y+dy[i]]=vis[x][y]+1,bfs.push(mp(x+dx[i],y+dy[i]));
			}
		}
	}
	return vis[n-1][m-1];
}
int dist2(){
	vis[0][0]=1;
	bfs.push(mp(0,0));
	while(!bfs.empty()){
		pair<int,int> v= bfs.front();
		int x= v.first;
		int y= v.second;
		bfs.pop();
		for(int i=0;i<=3;i++){
			if(x+dx[i]<n and y+dy[i]<m and x+dx[i]>=0 and y+dy[i]>=0){
				if(!vis[x+dx[i]][y+dy[i]] and l2[x+dx[i]][y+dy[i]]) vis[x+dx[i]][y+dy[i]]=vis[x][y]+1,bfs.push(mp(x+dx[i],y+dy[i]));
			}
		}
	}
	return vis[n-1][m-1];
}
int dist3(){
	vis[0][0]=1;
	bfs.push(mp(0,0));
	while(!bfs.empty()){
		pair<int,int> v= bfs.front();
		int x= v.first;
		int y= v.second;
		bfs.pop();
		for(int i=0;i<=3;i++){
			if(x+dx[i]<n and y+dy[i]<m and x+dx[i]>=0 and y+dy[i]>=0){
				if(!vis[x+dx[i]][y+dy[i]] and l3[x+dx[i]][y+dy[i]]) vis[x+dx[i]][y+dy[i]]=vis[x][y]+1,bfs.push(mp(x+dx[i],y+dy[i]));
			}
		}
	}
	return vis[n-1][m-1];
}

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) l3[i][j]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> c;
			(c == '.') ? (l1[i][j]=1) : (l1[i][j]=0, l3[i][j]=0);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> c;
			(c == '.') ? (l2[i][j]=1) : (l2[i][j]=0, l3[i][j]=0);
		}
	}
	int ans1=dist1();
	memset(vis,0,sizeof(vis));
	int ans2=dist2();
	memset(vis,0,sizeof(vis));
	int ans3=dist3();
	//if(n==1 and m==1) return cout << ((l3[0][0]) ? "YES" : "NO") << endl, 0;
	if(ans3==0 or l3[0][0] == 0) cout << "NO" << endl;
	else if(ans1==ans2 and ans2==ans3) cout << "YES" << endl;
	else cout << "NO" << endl;

}
