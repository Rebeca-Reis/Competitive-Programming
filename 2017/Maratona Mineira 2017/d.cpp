#include <bits/stdc++.h>
using namespace std;

double m,p,j,x,rend;
int mes;

int main(){
	cin >> m >> p >> j >> x;
	if(m==0 or j==0){
		cout << 0 << endl;
		return 0;
	}
	for(int i=0;;i++){
		rend=j*m/100;
		if(rend<x){break;}
		else{
			m-=m*p/100;
			mes++;
		}
		cout << mes << " " << m << endl;
	}
	cout << mes-1 << endl;
}