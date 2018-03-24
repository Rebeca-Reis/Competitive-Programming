#include <bits/stdc++.h>
using namespace std;

long long n,h,x,mini,maxi,a[50005],ans,k;

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
		cout >> 1 >> endl;
		return 0;}
	for(int h=1;h<=maxi;h++){
		x=1;
		k=1;
		for(int j=k;j<=n;j++){
			if(a[j]>=x){
				if(x<h) x++;
				else x--;
				if(x==1){
					break;
					ans=max(h,ans);
				}
			}
			else{
				k++;
				h--;
			}
		}
	}
	cout << ans << endl;
}