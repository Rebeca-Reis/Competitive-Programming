#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2241

int n,p,grid[505][505],x,y,dp[505][505][505],sump,sumb,v[4],cont1,cont2,cont3,cont0;

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
				v[0]=dp[i][j][k-1],v[1]=dp[i][j+1][k-1],v[2]=dp[i+1][j][k-1],v[3]=dp[i+1][j+1][k-1];
				for(int u=0;u<4;u++){
					if(v[u]==0) cont0++;
					else if(v[u]==1) cont1++;
					else if(v[u]==2) cont2++;
					else cont3++;
				}
				if(cont3>0) dp[i][j][k]=3;
				else if(cont1>0 and cont2>0) dp[i][j][k]=3;
				else if(cont1>0) dp[i][j][k]=1,sump++;
				else if(cont2>0) dp[i][j][k]=2,sumb++;
				else dp[i][j][k]=0;
				cont0=cont1=cont2=cont3=0;
			}
		}
	}
	cout << sump << " " << sumb << endl;
	return 0;
}
