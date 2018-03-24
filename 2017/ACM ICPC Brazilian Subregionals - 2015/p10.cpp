#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1940

int j,r,v[505],a,maxi,resp;

int main(){
	cin >> j >> r;
	for(int i=0;i<j*r;i++){
		cin >> a;
		v[i%j]+=a;
		if(v[i%j]>=maxi) maxi=v[i%j],resp=i%j;
	}
	cout << resp+1 << endl;
} 