#include <bits/stdc++.h>
using namespace std;

int a[7][15],m,d,ans,k;
int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	cin >> m >> d;
	ans=1;
	if(d<7) k=7-d +1;
	dias[m-1]-=k;
	ans+=dias[m-1]/7;
	(dias[m-1]%7==0) ? ans=ans : ans++;
	cout << ans << endl;
}