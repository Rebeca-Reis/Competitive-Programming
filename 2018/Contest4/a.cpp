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

int l,c,start,cont1,cont2;
int grid2[15][15];
vector<string> grid;
string s;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
	cin.tie(0);
	while(cin >> l >> c >> start){
		if(l == 0 and c == 0 and start == 0) return 0;
		cont1=0,cont2=0;
		int posx=-1,posy=-1;
		memset(grid2,0,sizeof(0));
		grid.clear();
		for(int i=0;i<l;i++){
			cin >> s;
			grid.pb(s);
		}
		int y=start-1;
		int x=l-1;
		while(x>=0 and x<l and y>=0 and y<c){
			db(x _ y _  grid[l-1-x][y] _ posx _ posy);
			if(x==posx and y==posy){
			cont2++;
			break;
		}	
			else if(grid2[l-1-x][y]==1 and posx==-1){
				cont2=0,posx=x,posy=y;
				if(grid[l-1-x][y]=='N') x+=dx[0],y+=dy[0];
				if(grid[l-1-x][y]=='S') x+=dx[1],y+=dy[1];
				if(grid[l-x-1][y]=='E') x+=dx[2],y+=dy[2];
				if(grid[l-1-x][y]=='W') x+=dx[3],y+=dy[3];
				continue;
			}
			else if(grid[l-1-x][y]=='N' and (x!=posx or y!=posy)){
				grid2[l-1-x][y]=1, x+=dx[0], y+=dy[0],cont1++,cont2++;
			}
			else if(grid[l-x-1][y]=='S' and (x!=posx or y!=posy)){
				grid2[l-1-x][y]=1, x+=dx[1], y+=dy[1], cont1++,cont2++;
			}
			else if(grid[l-x-1][y]=='E' and  (x!=posx or y!=posy)){
				grid2[l-1-x][y]=1, x+=dx[2], y+=dy[2],cont1++,cont2++;
			}
			else if(grid[l-1-x][y]=='W' and  (x!=posx or y!=posy)){
				grid2[l-x-1][y]=1, x+=dx[3], y+=dy[3],cont1++,cont2++;	
			}
			db(cont1 _ cont2);
		}
		if(x<0 or x>=l or y<0 or y>=c) cout << cont1 << " step(s) to exit\n";
		else cout << cont1-2*cont2-1 << " step(s) before a loop of " << cont2+1 << " step(s)\n";
	}
}

