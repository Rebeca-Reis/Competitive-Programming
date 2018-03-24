#include <bits/stdc++.h>
using namespace std;

int linhas[4][1005],dono_lin[1005];
int colunas[4][1005],dono_col[1005]; //r,h,c,p
int ans[4],n,m,k,x;
char c;

int main(){
	cin >> n >> m >> k;
	for (int i=0;i<k;i++){
		cin >> c >> x;
		if(c=='L'){
			if(linhas[i%4][x]) ans[i%4]+=m-linhas[i%4][x],linhas[i%4][x]=m;
			else linhas[i%4][x]=m, ans[i%4]+=m;
			for(int j=0;j<4;j++) if(linhas[j][x] and j!=(i%4)) ans[j]-=linhas[j][x], linhas[j][x]=0;
			for(int j=0;j<4;j++){
				for(int col=1;col<=m;col++){
					if(colunas[j][col] and j!=(i%4)) ans[j]--,colunas[j][col]--;
					else if(colunas[j][col] and j==(i%4)) ans[j]--;
				}
			}
		}
		else if(c=='C'){
			if(colunas[i%4][x]) ans[i%4]+=n-colunas[i%4][x],colunas[i%4][x]=n;
			else colunas[i%4][x]=n, ans[i%4]+=n;
			for(int j=0;j<4;j++) if(colunas[j][x] and j!=(i%4)) ans[j]-=colunas[j][x], colunas[j][x]=0;
			for(int j=0;j<4;j++){
				for(int lin=1;lin<=n;lin++){
					if(linhas[j][lin] and j!=(i%4)) ans[j]--,linhas[j][lin]--;
					else if(linhas[j][lin] and j==(i%4)) ans[j]--;
				}
			}
		}
	}
	cout << "R" << ans[0] << " " << "H" << ans[1] << " " << "C" << ans[2] << " " << "P" << ans[3] << endl;
}