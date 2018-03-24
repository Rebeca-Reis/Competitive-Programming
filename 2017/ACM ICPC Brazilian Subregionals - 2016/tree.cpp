#include <bits/stdc++.h>
using namespace std;

int n,m,id,l,k,q,r,esq[10005],dir[10005],cc[10005],cd[10005],visc[10005],visd[10005],sum;
int maxic,maxid,ans;

int dfsc(int u){
	visc[u]=1;
	if(cc[u]) return 1+dfsc(cc[u]);
	else return 1;
}

int dfsd(int u){
	visd[u]=1;
	if(cd[u]) return 1+dfsd(cd[u]);
	else return 1;
}

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> id >> l >> k;
		esq[id]=l;
		cc[id]=k;
	}
	cin >> m;
	for(int i=1;i<=m;i++){
		cin >> id >> q >> r;
		dir[id]=r;
		cd[id]=q;
	}
	for(int i=1;i<=n;i++) if(!visc[i]){
		sum=0;
		maxic= max(dfsc(i),maxic);
	}
	for(int i=1;i<=m;i++) if(!visd[i]){
		sum=0;
		maxid= max(dfsd(i),maxid);
	}
	memset(visc,0,sizeof(visc));
	memset(visd,0,sizeof(visd));
	ans=n+m-max(min(dfsc(1),maxid),min(dfsd(1),maxic));
	cout << ans << endl;
	return 0;
}