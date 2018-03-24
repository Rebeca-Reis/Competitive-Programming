#include <bits/stdc++.h>
using namespace std;

int n,h,x,mini,maxi,a[50005],ans,k,aux,op;

int main(){
	cin >> n;
	mini=55000;
	maxi=-1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		mini=min(mini,a[i]);
		maxi=max(maxi,a[i]);
	}
	if(n==1 or n==2){
		cout << 1 << endl;
		return 0;}
		k=2;
		aux=k;
	for(int h=2;h<=maxi;h++){
		x=2;
		k=aux;
		op=0;
		for(int j=k;j<=n;j++){
			if(a[j]>=x){
				cout << "ok " << x << endl;
				if(x==1){
					ans=max(h,ans);
					aux=2;
					break;
				}
				if(x<h and !op) x++;
				else if(x==h) x--,op=1;
				else if(x<h and op) x--;
			}
			else{
				aux++;
				if(k==n) {break;}
				else h--;
			}
		}
	}
	cout << ans << endl;
}