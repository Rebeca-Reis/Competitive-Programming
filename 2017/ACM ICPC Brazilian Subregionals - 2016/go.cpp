#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2241

int n,p,grid[505][505],x,y,dp[505][505][505],sump,sumb;
set <int> dps;

int main(){
	cin >> n >> p;
	sump=sumb=p;
	for(int i=0;i<p;i++){
		cin >> x >> y;
		grid[x][y]=dp[x][y][1]=1;
	}
	for(int i=0;i<p;i++){
		cin >> x >> y;
		grid[x][y]=dp[x][y][1]=2;
	}
	for(int k=2;k<=n;k++){
		for(int i=1;i<=n-k+1;i++){
			for(int j=1;j<=n-k+1;j++){
				dps.insert(dp[i][j][k-1]),dps.insert(dp[i][j+1][k-1]),dps.insert(dp[i+1][j][k-1]),dps.insert(dp[i+1][j+1][k-1]);
				if(dps.count(3)) dp[i][j][k]=3;
				else if(dps.count(1) and dps.count(2)) dp[i][j][k]=3;
				else if(dps.count(1)) dp[i][j][k]=1,sump++;
				else if(dps.count(2)) dp[i][j][k]=2,sumb++;
				else dp[i][j][k]=0;
				dps.clear();
			}
		}
	}
	cout << sump << " " << sumb << endl;
	// for(int k=1;k<=n;k++){
	// 	cout << "k= " << k << endl;
	// 	for(int i=1;i<=n;i++){
	// 		for(int j=1;j<=n;j++){
	// 			cout << dp[i][j][k] << " ";
	// 		}
	// 		cout << endl;
	// 	}
	// }
}
