#include <bits/stdc++.h>
using namespace std;

int n,v[50005],dir[50005],esq[50005],ans;

int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> v[i];
	for(int i=1;i<=n;i++) esq[i]=min(esq[i-1]+1,v[i]);
	for(int i=n;i>=0;i--) dir[i]=min(dir[i+1]+1,v[i]);
	for(int i=1;i<=n;i++) ans=max(ans,min(esq[i],dir[i]));
	cout << ans << endl;
}
